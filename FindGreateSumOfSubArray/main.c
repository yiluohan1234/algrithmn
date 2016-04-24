/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月24日 星期日 17时36分19秒
 ************************************************************************/

#include "FindGreateNumOfSubArray.h"

void Test(char *name, int *data, int length, int expected)
{
	if (name != NULL)
	{
		if (FindGreateNumOfSubArray(data, length) == expected)
			printf("test %s pass!\n", name);
		else
			printf("test %s fail!\n",name);
	}
}
void Test1()
{
	int data[] = {1, -2, 3, 10, -4, 7, 2, -5};
	Test("test1", data, sizeof(data)/sizeof(data[0]), 18);
}

int main()
{
	Test1();
	return 0;
}
