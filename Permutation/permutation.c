/*************************************************************************
	> File Name: permutation.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月27日 星期三 08时59分11秒
 ************************************************************************/

#include "permutation.h"
/*
 * 输入一个字符串，打印出该字符串中字符的所有排列
 * */
void permutation(char *pStr, char *pBegin)
{
	if (pStr == NULL || pBegin == NULL)
		return;

	if (*pBegin == '\0')
	{
		printf("%s\n", pStr);
	}
	else
	{
		char *pChar = pBegin;
		for (pChar = pBegin; *pChar != '\0'; ++pChar)
		{
			char tmp = *pChar;
			*pChar = *pBegin;
			*pBegin = tmp;
			permutation(pStr, pBegin + 1);
			tmp = *pChar;
			*pChar = *pBegin;
			*pBegin = tmp;
		}
	}
}
