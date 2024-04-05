#include<stdio.h>
int main()
{
	int year, month, day;
	int i, sum = 0;
	int buf[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	printf("please input year month day\n");
	scanf_s("%d %d %d", &year, &month, &day);
	for (i = 0; i < month - 1; i++)
	{
		sum = sum + buf[i];
	}
	sum = sum + day;
	if ((month > 2) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		sum = sum + 1;
	}
	printf("sum = %d\n", sum);
	return 0;
}