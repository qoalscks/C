//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("Ŀ�ǵ带 �Է��ϼ��� :");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("������â ����\n"); break;
//	case 'm': printf("����â ����\n"); break;
//	default: printf("������ ����� �����ϴ�\n");
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
//	printf("ù ��° ����� �� ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("�� ��° ����� �� ==> ");
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
//			printf(" 0���� ������ �ȵ˴ϴ�. \n");
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
//			printf(" 0���� ������ ���������� �ȵ˴ϴ�. \n");
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
//	printf("ù ��° ����� �� ==> ");
//	scanf("%d", &input1);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &oper);
//	printf("�� ��° ����� �� ==> ");
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
//		printf("0���� ������ �ȵ˴ϴ�. \n");
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
//			printf("0���� ������ �ȵ˴ϴ�. \n");
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
//	printf("�޿� �ش��ϴ� ���� �Է����ּ��� : ");
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
//	default: printf("�޿� �ش����� �ʴ� ���Դϴ�");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("<, a ���� �̵�\n");
//	printf(">, d, ������ �̵�\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<': case 'a':
//		printf("�������� �̵��մϴ�.\n");
//		break;
//	case '>': case 'd':
//		printf("���������� �̵��մϴ�.\n");
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
//	printf("�޴��� �����ϼ���.");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1: printf("�� ���� ����\n"); break;
//	case 2: printf("���̺� ������ �ε�\n"); break;
//	case Option: printf("�ɼ� ����\n"); break;
//	default: printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("���� �Է��ϼ��� : ");
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 3: case 6: case 9: printf("¦"); break;
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
//	case 'x': printf("���ĺ� x �Է�.\n"); break;
//	case 'X': printf("����ǥ �Է�.\n"); break;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1. ���ϱ� 2. ����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: {int number1, number2; printf("���� �ΰ��� �Է��ϼ���.\n"); scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2); break; }
//	case 2: {int number3, number4; printf("���� �ΰ��� �Է��ϼ���.\n"); scanf("%d %d", &number3, &number4);
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
//	printf("������ �Է��ϼ��� : ");
//	scanf("%c", &a);
//	switch (a)
//	{
//	case 'w':printf("�� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	case 'a':printf("�� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	case 'd':printf("�� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	case 's':printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�."); break;
//	default:printf("�߸� �Է��ϼ̽��ϴ�.");
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int appetizer, maindish, dessert;
//	printf("����Ÿ������ ������.\n1.ĳ���\n2.������\n3.Ǫ�Ʊ׶�\n");
//	scanf("%d", &appetizer);
//	printf("���ε𽬸� ������.\n1.������ũ\n2.�����丮\n3.�簥��\n");
//	scanf("%d", &maindish);
//	printf("����Ʈ�� ������.\n1.�ɟ�\n2.���̽�ũ��\n3.���ݸ�����\n");
//	scanf("%d", &dessert);
//	switch (appetizer)
//	{
//	case 1: printf("�ֹ��� ������ ĳ���,");
//	case 2: printf("�ֹ��� ������ ������,");
//	case 3: printf("�ֹ��� ������ Ǫ�Ʊ׶�,");
//	}
//	switch (maindish)
//	{
//	case 1: printf("������ũ,");
//	case 2: printf("�����丮,");
//	case 3: printf("�簥��,");
//	}
//	switch (dessert)
//	{
//	case 1: printf("�ɟ��Դϴ�.");
//	case 2: printf("���̽�ũ���Դϴ�.");
//	case 3: printf("���ݸ������Դϴ�.");
//	}
//	return 0;
//}