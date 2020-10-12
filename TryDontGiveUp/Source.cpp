#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "Header.h"


void stack_init(stack* s)
{
	s->item = NULL;
}

int stack_empty(stack s)
{
	return s.item == NULL;    /*(s.numOfItems == 0)  àå ìçìåôéï: */
}

int stack_full(stack s)
{
	return 0;
}

void stack_push(stack* s, stack_info x)
{
	if (!stack_full(*s))
	{
		stack_node* temp = (stack_node*)malloc(sizeof(stack_node));
		temp->data = x;
		temp->next = NULL;
		temp->next = s->item;
		s->item = temp;
	}
}


stack_info stack_pop(stack* s)
{
	if (stack_empty(*s) == 0)
	{
		stack_info x = s->item->data;
		stack_node* temp = s->item;
		s->item = s->item->next;
		free(temp);
		return x;
	}
}

stack_info stack_peek(stack s)
{
	if (stack_empty(s) == 0)
	{
		return  s.item->data;
	}

}


