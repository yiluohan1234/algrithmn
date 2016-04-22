/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月22日 星期五 09时50分17秒
 ************************************************************************/

#include "NumberOf1Between1AndN.h"

void Test(char *name, int n, unsigned int expected)
{
	if (name != NULL)
	{
		if (NumberOf1Between1AndN_solution1(n) == expected)
			printf("Test %s pass in solution 1!\n", name);
		else
			printf("Test %s fail in solution 1!\n", name);
		if (NumberOf1Between1AndN_solution2(n) == expected)
			printf("Test %s pass in solution 2!\n", name);
		else
			printf("Test %s fail in solution 2!\n", name);

	}
}

void Test1()
{
	Test("Test1", 10, 2);
}

int main()
{
	Test1();
	return 0;
}
