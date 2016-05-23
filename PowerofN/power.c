/*************************************************************************
	> File Name: power.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月23日 星期一 16时24分18秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "power.h"
int equal(double num1,double num2)
{
	int ret = 0;
	if (((num1-num2)> -0.000001)&&((num1-num2)<0.000001))
	{
		ret = 1;
	}
	else
		ret = 0;
	return ret;
}
double powerExp(double base, unsigned int exp)
{
	double result = 1.0;
	unsigned int i = 0;
	for (i=1; i<=exp;i++)
	{
		result*=base;
	}
	return result;
}
double power(double base, int exp)
{
	if (equal(base, 0)&&exp < 0)
	{
		return 0.0;
	}

	unsigned int absExp = (unsigned int )(exp);
	if (exp < 0)
		absExp = (unsigned int )(-exp);

	double result = powerExp(base, absExp);

	if (exp < 0)
		result = 1.0/result;

	return result;
}
/*
 *利用公式
 *二分法
 **/
double power_ld(double base, int exp)
{
	if (exp ==0)
	{
		return 1;
	}
	if (exp == 1)
	{
		return base;
	}
	double result = power_ld(base, exp>>1);
	result *= result;

	if ((exp&0x1) == 1)
		result *= base;
	return result;
}
