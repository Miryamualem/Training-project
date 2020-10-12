//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#include "Header.h"
// בודק את המקסימום במחסנית
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
//
//int MaxStuck(Header* head)
//{
//	Header temp;
//	stack_init(&temp);
//	int x, max=0;
//	if (stack_empty(*head))
//		return 0;
//	while(!stack_empty(*head))
//	{
//		
//		stack_push(&temp, stack_pop(head));
//		if (stack_peek(temp) > max)
//			max = stack_peek(temp);
//	}
//	while (!stack_empty(temp))
//	{
//		stack_push(head, stack_pop(&temp));
//	}
//	return max;
//
//
//}
//void main()
//{
//	int  b;
//	Header head;
//	stack_init(&head);
//	AddItem(&head);
//	b = MaxStuck(&head);
//	printf("Thr max of stuck is:%d\n", b);
//	
//}