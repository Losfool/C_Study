#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<corecrt.h>
void help(void)
{
	printf("\n*****************************************");
	printf("\n* ����������޷��˳���                  *");
	printf("\n* �밴������ĸ�û����̣�                *");
	printf("\n* ���������ʼ���ԣ���������ĸʱ��ʼ��ʱ*");
	printf("\n* �����������_��ʾ                     *");
	printf("\n*****************************************\n\n");
}
int main()
{
	char ch;
	char str[51] = "";
	int i;
	int count = 0;
	time_t start_time, end_time;
	while (1)
	{
		system("cls");
		help();
		ch = _getch();//������������
		srand(time(NULL));
		for (i = 0; i < 50; i++)
		{
			str[i] = rand() % 26 + 'a';
		}
		str[50] = '\0';
		printf("%s\n", str);
		count = 0;
		for (i = 0; i < 50; i++)
		{
			ch = _getch();
			if (i == 0)
			{
				start_time = time(NULL);
			}
			if (ch == str[i])
			{
				count++;
				printf("%c", ch);
			}
			else
			{
				printf("_");
			}
		}
		end_time = time(NULL);
		printf("\n��ȷ��Ϊ��%d %c\n", count*100/50, '%');
		printf("��ʱ %lld ��\n", (long int)end_time - start_time);
		while (1)
		{
			ch = _getch();
			if (ch == ' ')
			{
				break;
			}
			if (ch == 27)
			{
				return 0;
			}
		}
	}
	return 0;
}