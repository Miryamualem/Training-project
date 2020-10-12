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


void stack_init(stack* s); //�����

int stack_empty(stack s); //��� ������� ����

int stack_full(stack s); //��� ������� ����

void stack_push(stack* s, stack_info x);  //����� ��� �������

stack_info stack_pop(stack* s);//���� �� ���� ����� ����� �������

stack_info stack_peek(stack s);//����� �� ���� ������ ����� ������� ���� ������ ����
