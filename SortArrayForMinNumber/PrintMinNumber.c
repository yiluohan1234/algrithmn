/*************************************************************************
	> File Name: PrintMinNumber.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月21日 星期四 09时28分54秒
 ************************************************************************/

#include "PrintMinNumber.h"
char g_strCombine1[G_MAXLEN*2 + 1];
char g_strCombine2[G_MAXLEN*2 + 1];
int compare(const void *strNum1, const void *strNum2)
{
	strcpy(g_strCombine1, *(const char **)strNum1);
	strcat(g_strCombine1, *(const char **)strNum2);
	strcpy(g_strCombine2, *(const char **)strNum2);
	strcat(g_strCombine2, *(const char **)strNum1);

	return strcmp(g_strCombine1, g_strCombine2);
}

/*
 * 输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能
 * 拼接出的所有数字中最小的一个
 * */
void PrintMinNumber(int *numbers, int length)
{
	if (numbers == NULL || length < 0)
	{
		return;
	}
	char **strNum = (char **)malloc(length*sizeof(char *));
	int i = 0;
	for (i = 0; i < length; i++)
	{
		strNum[i] = (char *)malloc(sizeof(char));
		sprintf(strNum[i], "%d", numbers[i]);
	}

	qsort(strNum, length, sizeof(char *), compare);

	for (i = 0; i < length; i++)
	{
		printf("%s", strNum[i]);
	}
	printf("\n");

	for (i = 0; i < length; i++)
	{
		if (strNum[i] != NULL)
			free(strNum[i]);
	}

	if (strNum != NULL)
		free(strNum);
}
