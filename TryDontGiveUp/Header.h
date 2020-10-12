#pragma once

typedef char stack_info;



typedef struct stack_node
{
	stack_info data; //value
	stack_node* next;
} stack_node;


typedef struct Header
{
	stack_node* item;
}stack;


void stack_init(stack* s); //אתחול

int stack_empty(stack s); //האם המחסנית ריקה

int stack_full(stack s); //האם המחסנית מלאה

void stack_push(stack* s, stack_info x);  //הכנסת ערך למחסנית

stack_info stack_pop(stack* s);//הוצא את הערך שנכנס אחרון למחסנית

stack_info stack_peek(stack s);//מחזיר תא הערך שניכנס אחרון למחסנית מבלי להוציא אותו
