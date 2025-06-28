//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요 :");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n"); break;
//	case 'm': printf("지도창 오픈\n"); break;
//	default: printf("지정된 기능이 없습니다\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//
//	if (k == '+')
//	{
//		result = a + b;
//		printf(" %d + %d = %d \n", a, b, result);
//	}
//
//	if (k == '-')
//	{
//		result = a - b;
//		printf(" %d - %d = %d \n", a, b, result);
//	}
//	if (k == '*')
//	{
//		result = a * b;
//		printf(" %d * %d = %d \n", a, b, result);
//	}
//	if (k == '/')
//	{
//		if (b != 0)
//		{
//			result = a / b;
//			printf(" %d / %d = %d \n", a, b, result);
//		}
//		else
//		{
//			printf(" 0으로 나누면 안됩니다. \n");
//		}
//	}
//	if (k == '%')
//	{
//		if (b != 0)
//		{
//			result = a % b;
//			printf(" %d %% %d = %d \n", a, b, result);
//		}
//		else
//		{
//			printf(" 0으로 나누면 나머지값이 안됩니다. \n");
//		}
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int input1, input2;
//	char oper;
//	int result;
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &input1);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &oper);
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &input2);
//	switch (oper)
//	{
//	case '+': result = input1 + input2;  break;
//	case '-': result = input1 - input2; break;
//	case '*': result = input1 * input2;  break;
//	case '/': if (input2 != 0)
//	{
//		result = input1 / input2;
//
//	}
//			else
//	{
//		printf("0으로 나누면 안됩니다. \n");
//	}
//			break;
//	case '%': {
//		if (input2 != 0)
//		{
//			result = input1 % input2;
//
//		}
//		else
//		{
//			printf("0으로 나누면 안됩니다. \n");
//		}
//		break;
//	}
//	}
//	printf(" %d %c %d = %d \n", input1,oper, input2, result);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int month;
//	printf("달에 해당하는 수를 입력해주세요 : ");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1: printf("January"); break;
//	case 2: printf("February"); break;
//	case 3: printf("March"); break;
//	case 4: printf("April"); break;
//	case 5: printf("May"); break;
//	case 6: printf("June"); break;
//	case 7: printf("July"); break;
//	case 8: printf("August"); break;
//	case 9: printf("September"); break;
//	case 10: printf("October"); break;
//	case 11: printf("November"); break;
//	case 12: printf("December"); break;
//	default: printf("달에 해당하지 않는 수입니다");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("<, a 왼쪽 이동\n");
//	printf(">, d, 오른쪽 이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<': case 'a':
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	const int Option = 3;
//	printf("메뉴를 선택하세요.");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1: printf("새 게임 시작\n"); break;
//	case 2: printf("세이브 데이터 로드\n"); break;
//	case Option: printf("옵션 세팅\n"); break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("수를 입력하세요 : ");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 3: case 6: case 9: printf("짝"); break;
//	default: printf("%d", num);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n"); break;
//	case 'X': printf("엑스표 입력.\n"); break;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1. 더하기 2. 빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: {int number1, number2; printf("숫자 두개를 입력하세요.\n"); scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2); break; }
//	case 2: {int number3, number4; printf("숫자 두개를 입력하세요.\n"); scanf("%d %d", &number3, &number4);
//		printf("%d -%d = %d\n", number3, number4, number3 - number4); break; }
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char a;
//	printf("방향을 입력하세요 : ");
//	scanf("%c", &a);
//	switch (a)
//	{
//	case 'w':printf("위 방향키를 입력하셨습니다."); break;
//	case 'a':printf("좌 방향키를 입력하셨습니다."); break;
//	case 'd':printf("우 방향키를 입력하셨습니다."); break;
//	case 's':printf("아래 방향키를 입력하셨습니다."); break;
//	default:printf("잘못 입력하셨습니다.");
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int appetizer, maindish, dessert;
//	printf("에피타이저를 고르세요.\n1.캐비어\n2.샐러드\n3.푸아그라\n");
//	scanf("%d", &appetizer);
//	printf("메인디쉬를 고르세요.\n1.스테이크\n2.생선요리\n3.양갈비\n");
//	scanf("%d", &maindish);
//	printf("디저트를 고르세요.\n1.케잌\n2.아이스크림\n3.초콜릿무스\n");
//	scanf("%d", &dessert);
//	switch (appetizer)
//	{
//	case 1: printf("주문한 음식은 캐비어,");
//	case 2: printf("주문한 음식은 샐러드,");
//	case 3: printf("주문한 음식은 푸아그라,");
//	}
//	switch (maindish)
//	{
//	case 1: printf("스테이크,");
//	case 2: printf("생선요리,");
//	case 3: printf("양갈비,");
//	}
//	switch (dessert)
//	{
//	case 1: printf("케잌입니다.");
//	case 2: printf("아이스크림입니다.");
//	case 3: printf("초콜릿무스입니다.");
//	}
//	return 0;
//}