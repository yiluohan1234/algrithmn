/*************************************************************************
	> File Name: replaceBlank.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月25日 星期三 15时24分41秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "replaceBlank.h"
/*
 * 请实现一个函数，把字符串中的每个空格替换成“%20”
 * */
void replaceBlank(char *string, int length)
{
	if (string == NULL || length <= 0)
		return;
	int stringLen = 0;
	int blankLen = 0;
	int i=0;
	while (string[i] != '\0')
	{
		stringLen++;
		if (string[i] == ' ')
			blankLen++;
		i++;
	}
	
	int newLen = stringLen + blankLen*2;
	if (newLen > length)
		return ;

	int indexOld = stringLen;
	int indexNew = newLen;
	while (indexOld >= 0 && indexNew > indexOld)
	{
		if (string[indexOld] == ' ')
		{
			string[indexNew--] = '0';
			string[indexNew--] = '2';
			string[indexNew--] = '%';
		}
		else
		{
			string[indexNew--] = string[indexOld];
		}
		indexOld--;
	}
}
