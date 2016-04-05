/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com 
	> Created Time: 2016年04月05日 星期二 10时24分27秒
 ************************************************************************/

#include "LastRemaing.h"
/*
 * 0,1,2,...n-1这n个数字排成一个圆圈，从数字0开始每次从这个圆圈里删除第m个数字，求这个圆圈里剩下的最后一个数字
 * */

int main()
{

	int ret = 0;

	ret = Test("test1", 5, 3, 3);
	if (ret == -1)
	{
		printf("func Test():%s err:%d\n", "test1", ret);
	}

	ret = Test("test2", 5, 2, 2);
	if (ret == -1)
	{
		printf("func Test():%s err:%d\n", "test2", ret);
	}

	ret = Test("test3", 0, 0, -1);
	if (ret == -1)
	{
		printf("func Test():%s err:%d\n", "test3", ret);
	}



	return 0;
}
