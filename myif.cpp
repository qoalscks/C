//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple�� 17���� �ƴմϴ�");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple�� 7������ �����ϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����״�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple�� 10�� �ֽ��ϴ�.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	else
//	{
//		printf("apple�� 0���� �ƴմϴ�");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int input;
//  printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &input);
//	if (input < 0)
//	{
//		printf("�����Դϴ�");
//	}
//	else if (input > 0)
//	{
//		printf("����Դϴ�");
//	}
//	else
//	{
//		printf("0�Դϴ�");
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("input�� �� �ڸ� �����Դϴ�");
//	}
//	else
//	{
//		printf("input�� �� �ڸ� ���ڰ� �ƴմϴ�");
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150 �̻��Դϴ�.\n");
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150) {
//		printf("Ű�� 150 �̻��Դϴ�");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	printf("���̸� �Է��ϼ��� : ");
//	scanf("%d", &y_age);
//	/*if (y_age > 0)
//	{*/
//		printf("��ü ������\n");
//	//}
//	if (y_age >= 12)
//	{
//		printf("12�� ������\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15�� ������\n");
//	}
//	return 0;
////}
//
//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	scanf("%c", &initial); // A=65, a= 97
//	if (initial >= 'A' && initial <= 92)
//	{
//		printf("�빮���Դϴ�");
//	}
//	else if (initial >= 97 && initial <= 124)
//	{
//		printf("�ҹ����Դϴ�");
//	}
//	else
//	{
//		printf("���ڰ� �ƴմϴ�");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����2���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����2���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("����1�� ����2���� Ů�ϴ�");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����2���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//	}
//	else if (number < answer)
//	{
//		printf("����2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n")
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) {
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80) {
//		printf("������ B����Դϴ�.\n");
//	}
//	else if (score > 70) {
//		printf("������ C����Դϴ�.\n");
//	}
//	else if (score > 60) {
//		printf("������ D����Դϴ�.\n");
//	}
//	else {
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
////}
//
//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0) {
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0) {
//		printf("number�� �����Դϴ�.\n");
//	}
//	else {
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char x;
//	printf("w, a, d, s �� �ϳ��� �Է��ϼ��� : "); // a=97 w=120 d=100 s=116
//	scanf("%c", &x);
//	if (x == 'w')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (x == 'a')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (x == 'd')
//	{
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else if (x == 's')
//	{
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	else
//	{
//		printf("�߸� �Է��ϼ̽��ϴ�");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	printf("0���� 100������ gauge�� �Է��ϼ��� : ");
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("excellent");
//	}
//	else
//	{
//		printf("good");
//	}
//  return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("���� �Է��Ͻÿ� : ");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input�� 3�� ����Դϴ�.\n");
//		if (input % 6 == 0)
//		{
//			printf("input�� 6�� ����Դϴ�.\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input�� 9�� ����Դϴ�.\n");
//		}
//	}
//	
//	else
//	{
//		printf("input�� 3, 6, 9 �� ����� �ƴմϴ�");
//	}
//	
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int out;
//	double money;
//	scanf("%d %lf", &out, &money);
//	if (money - out - 0.5 >= 0 && out % 5 == 0)
//	{
//		printf("%.2lf", money - out - 0.5);
//	}
//	else
//	{
//		printf("%.2lf", money);
//	}
//}

#include <stdio.h>

int main()
{
	int burger, drink, side, dessert, calorie=0;
	//printf("���� �ϳ��� ������.\n1.ġ����� (461 Į�θ�)\n2.�������� (431 Į�θ�)\n3.��ǹ��� (420 Į�θ�)\n4.����\n");
	scanf("%d", &burger);
	//printf("���� �ϳ��� ������.\n1.ź������ (130 Į�θ�)\n2.������ �ֽ� (160 Į�θ�)\n3.���� (118 Į�θ�)\n4.����");
	scanf("%d", &drink);
	//printf("���̵� �޴� �ϳ��� ������.\n1.����Ƣ��(100 Į�θ�)\n2.����� (57 Į�θ�)\n3.���� ������ (70 Į�θ�)\n4.����\n");
	scanf("%d", &side);
	//printf("����Ʈ�� ������.\n1.������� (167 Į�θ�)\n2.���� (226 Į�θ�)\n3.���� �� (75 Į�θ�)\n4.����\n");
	scanf("%d", &dessert);
	if (burger == 1)
	{
		calorie += 461;
	}
	else if (burger == 2)
	{
		calorie += 431;
	}
	else if (burger == 3)
	{
		calorie += 420;
	}
	else if (burger == 4)
	{
		calorie +=0;
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	if (drink == 1)
	{
		calorie += 130;
	}
	else if (drink == 2)
	{
		calorie += 160;
	}
	else if (drink == 3)
	{
		calorie += 118;
	}
	else if (drink == 4)
	{
		calorie +=0;
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	if (side == 1)
	{
		calorie += 100;
	}
	else if (side == 2)
	{
		calorie += 57;
	}
	else if (side == 3)
	{
		calorie += 70;
	}
	else if (side == 4)
	{
		calorie += 0;
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	if (dessert == 1)
	{
		calorie += 167;
	}
	else if (dessert == 2)
	{
		calorie += 266;
	}
	else if (dessert == 3)
	{
		calorie += 75;
	}
	else if (dessert == 4)
	{
		calorie +=0;
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	printf("Your total Calorie count is %d.", calorie);
	return 0;
}