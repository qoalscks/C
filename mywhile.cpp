//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		count++;
//	}
//		printf("count가 3보다 작은동안 반복\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	while (a < 6)
//	{
//		printf("C\n");
//		a++;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = -10;
//	while (a <= 0)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		/*if (a % 5 == 0)
//		{
//			printf("%d\n", a);
//			
//		}
//		a++;*/
//		printf("%d\n", a);
//		a += 5;
//		
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력) :");
//		scanf(" %c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다\n");
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료) :");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0){continue}
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int num = 1, multi=1;
//	while (1)
//	{
//		multi= num * multi;
//		
//		if (multi >= 50000)
//		{
//			printf("%d", num); break;
//		}
//		num++;
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char a='A';
//	while (1)
//	{
//		if (a == 'F')
//		{
//			a++;
//			continue;
//		}
//		else if (a > 'Z')
//		{
//			break;
//		}
//		printf("%c ", a);
//		a++;
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char a = 'Z';
//	while (a <= 'A')
//	{
//		if (a == 'C' || a == 'M')
//		{
//			a--;
//			continue;
//		}
//		
//		printf("%c ",a);
//		a--;
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int num = 0, a, b;
	while (1)
	{
		printf("A : ");
		scanf("%d", &a);
		if (a < 1 || a>3)
		{
			printf("다시 입력하세요.\n");
			continue;
		}
		num = num + a;
		printf("=> %d\n", num);
		a = 0;
		if (num >= 31)
		{
			break;
		}
		while (1)
		{
			printf("B : ");
			scanf("%d", &b);
			if (b < 1 || b>3)
			{
				printf("다시 입력하세요.\n");
				continue;
			}
			num = num + b;
			printf("=> %d\n", num);
			b = 0;
			if (num >= 31)
			{
				break;
			}
		}
		continue;
	}
}
