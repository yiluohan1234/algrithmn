/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月26日 星期六 13时04分31秒
 ************************************************************************/

#include "FindContinuousSequence.h"

/*
 * 输入一个正数s，打印出所有和为s的连续正数序列（至少包含两个数）
 * 例如：15->[1-5],[4-6],[7-8]
 * */
int main()
{
	int sum = 15;
	FindContinuousSequence(sum);

	return 0;
}
