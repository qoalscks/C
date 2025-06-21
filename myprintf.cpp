//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요\n");
//	printf("안녕하세요\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드 %d개\n", keyboard);
//	printf("마우스 %d개\n", mouse);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n", coin1, coin2, coin1 + coin2);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char A;
//	A = 97;
//	printf("A = %c\n", A);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f..\n", pi, e);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int r = 5;
//	double pi;
//	pi = 3.14;
//	double l=pi*r*2;
//	double s=pi*r*r;
//	printf("원의 넓이: %.2lf, 원의 둘레: %.2lf", s, l);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int w1 = 5;
//	int w2 = 2;
//	int h = 7;
//	double s = (w1 + w2) * h / 2.0;
//	printf("사다리꼴의 넓이: %.2lf", s);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d 입니다.\n", y + x);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char a, b, c;
//	printf("문자 두개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	double pi = 3.14;
//	int r;
//	printf("원의 반지름을 입력 : ");
//	scanf("%d", &r);
//	double l = 2.0 * pi * r;
//	double s = pi * r * r;
//	printf("원의 둘레 : %.2lf, 원의 넓이 : %.2lf", l, s);
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int w1;
//	int w2;
//	int h;
//	printf("사다리꼴의 밑변 : ");
//	scanf("%d", &w1);
//	printf("사다리꼴의 윗변 : ");
//	scanf("%d", &w2);
//	printf("사다리꼴의 높이 : ");
//	scanf("%d", &h);
//	double s = (w1 + w2) * h / 2.0;
//	printf("사다리꼴의 넓이 : %.2lf", s);
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int x;
//	int y;
//	scanf("%d %d", &x, &y);
//	int s = x * y;
//	printf("%d", s);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	double avg = (a + b + c + d) / 4.0;
//	printf("%.2lf", avg);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	printf("두개의 수를 입력 : ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//  return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d=1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d=5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d=4%%2\n", third);
//  return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 % number2);
//	printf("%d%%%d\n", number1, number2);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d=1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d=2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d=3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d=4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d=5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d=6%%3\n", sixth);
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("수 입력 : ");
//	scanf("%d", &num);
//	num = num % 50;
//	printf("%d", num);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d=6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d=6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d=6/4\n", data3);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("젤리의 가격을 입력해주세요 : ");
//	scanf("%d", &coin);
//	coin = 1000 - coin;
//	int coin500 = coin / 500;
//	coin = coin % 500;
//	int coin100 = coin / 100;
//	coin = coin % 100;
//	int coin50 = coin / 50;
//	coin = coin % 50;
//	int coin10 = coin / 10;
//	printf("500원 %d개, ", coin500);
//	printf("100원 %d개, ", coin100);
//	printf("50원 %d개, ", coin50);
//	printf("10원 %d개입니다.", coin10);
//	printf("1원은 없습니다");
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 10; 
//	a = (a / 3) * 2000 + (a % 3) * 1000;
//	printf("%d", a);
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	int e;
//	int f;
//	scanf("%d %d", &a, &b);
//	c = (b % 10) * a;
//	d = (b / 10) % 10 * a;
//	e = (b / 100) * a;
//	f = a * b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	printf("%d", f);
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	printf("내 주머니에 있는 돈은");
	int myMoney = (rand() % 10 + 1) * 1000;
	printf(" %d원이다.\n", myMoney);
	int coin500 = rand() % 4 * 500;
	int coin100 = rand() % 5000;
	coin100 = coin100 / 100 * 100;
	printf("그리고 과자의 가격은 ");
	printf("%d원이다.", coin500 + coin100);
	printf("\n나는 과자를 살 수 있을까?");
	return 0;
}