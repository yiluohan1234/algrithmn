/*************************************************************************
	> File Name: reOrderOddEven.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月20日 星期五 09时02分12秒
 ************************************************************************/

#include "reOrderOddEven.h"

int func(int n)
{
	return (n&0x1)==0;
}
void reOrderOddEven(int *pData, unsigned int length)
{
	if (pData == NULL || length == 0)
	{
		return ;
	}

	int *pStart = pData;
	int *pEnd = pData + length -1;

	while (pStart < pEnd)
	{
		while (pStart < pEnd && (*pStart&0x1)!=0)
		{
			pStart++;
		}

		while (pStart < pEnd && ((*pEnd&0x1)==0))
		{
			pEnd--;
		}

		if (pStart < pEnd)
		{
			int tmp = *pStart;
			*pStart = *pEnd;
			*pEnd = tmp;
		}
	}
}
/*
void reOrderOddEven_2(int *pData, int length, int (*func)(int))
{
	if (pData == NULL || length == 0)
	{
		return ;
	}

	int *pStart = pData;
	int *pEnd = pData + length -1;

	while (pStart < pEnd)
	{
		while (pStart < pEnd && !func(*pStart))
		{
			pStart++;
		}

		while (pStart < pEnd && func(*pEnd))
		{
			pEnd--;
		}

		if (pStart < pEnd)
		{
			int tmp = *pStart;
			*pStart = *pEnd;
			*pEnd = tmp;
		}
	}
}
*/
