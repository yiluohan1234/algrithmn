/*************************************************************************
	> File Name: FirstNotRepeatingChar.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月19日 星期二 16时01分54秒
 ************************************************************************/

#include "FirstNotRepeatingChar.h"

char FirstNotRepeatingChar(char *pStr)
{

	if (pStr == NULL)
	{
		return '\0';
	}

	unsigned int hashtable[HASHSIZE] = {0};

	char *p = pStr;

	while (*p != '\0')
	{
		hashtable[*(p++)]++;
	}
	p = pStr;

	while (*p != '\0')
	{
		if (hashtable[*p] == 1)
		{
			return *p;
		}
		p++;
	}

	return '\0';
}
