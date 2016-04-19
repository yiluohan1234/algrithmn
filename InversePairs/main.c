/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月18日 星期一 10时40分34秒
 ************************************************************************/

#include "InversePairs.h"
void Test(char *testName, int *data, int length, int expected)
{
	if (testName == NULL || data == NULL)
	{
		return ;
	}

	int count = InversePairs(data, length);
	printf("count:%d\n", count);
	if (count == expected)
	{
		printf("test %s pass!\n", testName);
	}
	else
	{
		printf("test %s fail!\n", testName);
	}
}
void Test1()
{
	int data[4] = {7, 5, 6, 4};
	Test("Test1()", data, 4, 5);
}
void Test2()
{
	int data[4] = {4, 5, 6, 7};
	Test("Test1()", data, 4, 0);
}
void Test3()
{
	int data[4] = {4, 7, 6, 5};
	Test("Test1()", data, 4, 3);
}
int main()
{
	Test1();
	Test2();
	Test3();
	return 0;
}
