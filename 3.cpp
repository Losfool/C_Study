#include<stdio.h>
int main()
{
	char str[15];
	printf("please input a str:\n");
	scanf_s("%s", str, 15);
	printf("str: %s\n", str);
	return 0;
}