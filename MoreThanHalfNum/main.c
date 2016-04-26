/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月26日 星期二 09时37分56秒
 ************************************************************************/

#include "MoreThanHalfNum.h"
void Test(char *name, int *data, int length, int expected)
{
	if(MoreThanHalfNum1(data, length) == expected)
		printf("%s pass in solution1!\n", name);
	else
		printf("%s fail in solution1!\n", name);
	if(MoreThanHalfNum2(data, length) == expected)
		printf("%s pass in solution2!\n", name);
	else
		printf("%s fail in solution2!\n", name);
}
void Test1()
{
	int data[] = {1, 2, 3, 2, 2, 2, 5, 4, 2};
	Test("Test1", data, sizeof(data)/sizeof(data[0]), 2);

}

int main()
{

	Test1();

	return 0;
}
