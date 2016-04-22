/*************************************************************************
	> File Name: NumberOf1Between1AndN.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月22日 星期五 09时45分00秒
 ************************************************************************/

#include "NumberOf1Between1AndN.h"
/*
 * 输入一个整数n，求从1到n这n个整数的十进制表示中1出现的次数
 * */
int NumberOf1Between1AndN_solution1(unsigned int n)
{
	int numbers = 0;
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		numbers += NumberOf1_solution1(i);
	}

	return numbers;
}
int NumberOf1_solution1(unsigned int n)
{
	int numbers = 0;
	while(n)
	{
		if (n%10 == 1)
			numbers++;
		n /= 10;
	}

	return numbers;
}
int powerBase10(unsigned int n)
{
	int result = 1;
	int i = 0;
	for (i = 0; i < n; i ++)
		result *= 10;

	return result;
}
int NumberOf1Between1AndN_solution2(int n)
{
	if (n <= 0)
		return 0;
	char StrN[50];
	sprintf(StrN, "%d", n);
	return NumberOf1_solution2(StrN);
}
int NumberOf1_solution2(const char *StrN)
{
	if (!StrN || *StrN < '0' || *StrN > '9' || *StrN == '\0')
		return 0;
	int first = *StrN - '0';
	int length = strlen(StrN);

	if (length ==1 && first ==0)
		return 0;
	if (length == 1 && first > 0)
		return 1;
	
	int numFirst = 0;
	if (first > 1)
		numFirst = powerBase10(length -1);
	else if (first == 1)
		numFirst = atoi(StrN + 1) + 1;

	int numOther = first*(length -1)*powerBase10(length -2);
	int numRecursive = NumberOf1_solution2(StrN + 1);

	return numFirst + numRecursive + numOther;
}
