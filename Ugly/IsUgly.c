/*************************************************************************
	> File Name: IsUgly.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月20日 星期三 09时02分21秒
 ************************************************************************/

#include "IsUgly.h"

int IsUgly(int number)
{
	while (number%2 == 0)
		number/=2;
	while (number%3 == 0)
		number/=3;
	while (number%5 == 0)
		number/=5;
	return (number ==1)?1:0;
}
int GetUglyNumber1(int index)
{
	if (index <= 0)
		return 0;
	int number = 0;
	int uglyFound = 0;

	while (uglyFound < index)
	{
		++number;
		if (IsUgly(number))
			++uglyFound;
	}

	return number;
}
int Min(int n1, int n2, int n3)
{
	int min = (n1 < n2) ? n1 : n2;
	min = (min < n3) ? min : n3;

	return min;
}
int GetUglyNumber2(int index)
{
	if (index <= 0)
		return 0;

	int *pUglyNumbers = (int *)malloc(index*sizeof(int));
	pUglyNumbers[0] = 1;
	
	int next = 1;

	int *p2 = pUglyNumbers;
	int *p3 = pUglyNumbers;
	int *p5 = pUglyNumbers;

	while (next < index)
	{
		int min = Min(*p2*2, *p3*3, *p5*5);
		pUglyNumbers[next] = min;
		while (*p2*2 <= pUglyNumbers[next])
			++p2;
		while (*p3*3 <= pUglyNumbers[next])
			++p3;
		while (*p5*5 <= pUglyNumbers[next])
			++p5;
		++next;
	}
	int ugly = pUglyNumbers[next-1];

	if (pUglyNumbers != NULL)
		free(pUglyNumbers);

	return ugly;
}
