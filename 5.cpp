#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<corecrt.h>
void help(void)
{
	printf("\n*****************************************");
	printf("\n* 输入过程中无法退出！                  *");
	printf("\n* 请按所给字母敲击键盘！                *");
	printf("\n* 按任意键开始测试，按下首字母时开始计时*");
	printf("\n* 输入出错则以_表示                     *");
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
		ch = _getch();//可以阻塞程序
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
		printf("\n正确率为：%d %c\n", count*100/50, '%');
		printf("用时 %lld 秒\n", (long int)end_time - start_time);
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