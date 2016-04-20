/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月20日 星期三 09时44分14秒
 ************************************************************************/

#include "IsUgly.h"

void Test(int index, int expected)
{
	if (GetUglyNumber1(index) == expected)
		printf("solution1 pass!\n");
	else
		printf("solution1 fail!\n");
	if (GetUglyNumber2(index) == expected)
		printf("solution2 pass!\n");
	else
		printf("solution2 fail!\n");
}

int main()
{
	Test(1,1);
	Test(10, 12);
	Test(1500, 859963392);

	return 0;
		
}
