#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "Header.h"
//void AddItem(Header* head)
//{
//	int num;
//	printf("enter number:");
//	scanf_s("%d", &num);
//	while (num > -1)
//	{
//		stack_push(head, num);
//		scanf_s("%d", &num);
//	}
//}
//int same(Header* head, Header* head1)
//{
//	int arr[10] = { 0 };
//	Header temp;
//	stack_init(&temp);
//	int flag = 0;A
//	while (!stack_empty(*head))
//	{
//		int n1 = stack_pop(head);
//		stack_push(&temp, n1);
//		arr[n1 - 1]++;
//	}
//	while (!stack_empty(temp))
//	{
//		stack_push(head, stack_pop(&temp));
//	}
//	stack_init(&temp);
//	while (!stack_empty(*head1))
//	{
//		int n1 = stack_pop(head1);
//		stack_push(&temp, n1);
//		arr[n1 - 1]++;
//	}
//	while (!stack_empty(temp))
//	{
//		stack_push(head1, stack_pop(&temp));
//	}
//	for (int i = 0; i < 10 ; i++)
//	{
//		if (arr[i] == 1)
//		{
//			 flag = 1;
//			break;
//		}
//
//	}
//	if (flag)
//		return 1;
//	else
//		return 0;
//
//
//}
//void main()
//{
//	Header head;
//	Header head1;
//	stack_init(&head);
//	stack_init(&head);
//	AddItem(&head);
//	AddItem(&head);
//	int res=same(&head, &head1);
//	if (res)
//		printf("not same!!");
//	else
//		printf("same!!");
//		
//
//
//}
