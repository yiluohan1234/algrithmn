/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月26日 星期六 12时34分45秒
 ************************************************************************/
/*
 * 输入一个递增排序的数组和一个数字s查找两个数，使得它们的和正好是s，如果有多对数字的和等于s，输出任意一对即可
 * 例如：[1, 2, 4, 7, 11, 15]：15->4,11
 * */
#include "FindNumbersWithSum.h"

int main()
{
	int data[6] = {
		1, 2, 4, 7, 11, 15
	};
	int num1, num2;

	if(FindNumbersWithSum(data, 6, 15, &num1, &num2) == 1)
	{
		printf("num1:%d\n", num1);
		printf("num2:%d\n", num2);
	}
	return 0;
}
