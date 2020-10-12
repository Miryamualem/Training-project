//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#include "Header.h"
// בודק האם האברים במחחסנית מסודרים בסדר עולה
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
//int UpManage(Header* head)
//{
//	Header temp;
//	int check = 0;
//	stack_init(&temp);
//	int x;
//	if (stack_empty(*head))
//		return 0;
//	while (!stack_empty(*head))
//	{
//		x = stack_pop(head);
//		if (x > stack_peek(*head))
//		{
//			check = 1;
//		}
//		stack_push(&temp, x);
//	}
//	while (!stack_empty(temp))
//	{
//		stack_push(head, stack_pop(&temp));
//	}
//	if (check)
//		return check;
//	return check;
//
//}
//void main()
//{
//	int  b;
//	Header head;
//	stack_init(&head);
//	AddItem(&head);
//	b = UpManage(&head);
//	printf("The answer is:%d\n", b);
//	
//}