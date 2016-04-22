/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月21日 星期四 09时56分01秒
 ************************************************************************/

#include "PrintMinNumber.h"

void Test(char *name, int *numbers, int length, char *expected)
{
	if (name != NULL)
		printf("test begin:\n");
	if (expected != NULL)
		printf("expected result is %s\n", expected);
	printf("actual result is :\n");
	PrintMinNumber(numbers, length);
	printf("\n");
}
void Test1()
{
	int numbers[] = {3, 5, 1, 4, 2};
	Test("Test1", numbers, sizeof(numbers)/sizeof(numbers[0]), "12345");
}
int main()
{
	Test1();
	return 0;
}
