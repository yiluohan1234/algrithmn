/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年04月06日 星期三 15时19分36秒
 ************************************************************************/

#include "continusCards.h"
int Test(char *testName, int *numbers, int length, int expected)
{
	int ret = 0;
	if (testName == NULL || numbers == NULL ||length <1)
	{
		ret = -1;
		printf("func Test() err:param\n");
	}
	
	int result = 0;
	result = IsContinous(numbers, length);

	if (result == expected)
		printf("Test:%s is success!\n", testName);
	else
		printf("Test:%s is success!\n", testName);

	return ret;
}
int main()
{
	int rv = 0;
	int testNumbers[5] = {9, 0, 5, 8, 7};
	int testNumbers1[5] = {0, 1, 5, 1, 3};
	int testNumbers2[5] = {0, 0, 5, 1, 3};
	rv = Test("test1", testNumbers, 5, 0);
	if (rv == -1)
	{
		printf("func Test() err\n");
	}
	rv = Test("test2", testNumbers1, 5, 1);
	if (rv == -1)
	{
		printf("func Test() err\n");
	}

	rv = Test("test3", testNumbers2, 5, 0);
	if (rv == -1)
	{
		printf("func Test() err\n");
	}

	return 0;
}
