#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "Header.h"
// בודק כמה אברים בדר עולה וכמה בסדר יורד
//void AddItem(Header* head)
//{
//	int num;
//	printf("enter number To end press -1:");
//	scanf_s("%d", &num);
//	while (num > -1)
//	{
//		stack_push(head, num);
//		scanf_s("%d", &num);
//	}
//}
//int downup(Header* head)
//{
//
//	Header temp;
//	int sum = 0;
//	int sum1 = 0;
//	stack_init(&temp);
//
//	if (!stack_empty(*head))
//		stack_push(&temp, stack_pop(head));
//	while (!stack_empty(*head))
//	{
//		int n1 = stack_pop(head);
//		if (n1 > stack_peek(temp))
//			sum++;
//		else
//			sum1++;
//		stack_push(&temp, n1);
//	}
//	while (!stack_empty(temp))
//		stack_push(head, stack_pop(&temp));
//	if (sum > sum1)
//		return sum;
//	return sum1;
//
//
//}
//
void main()
{
	Header head;
	stack_init(&head);

}
