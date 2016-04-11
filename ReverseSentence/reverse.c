/*************************************************************************
	> File Name: reverse.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月25日 星期五 15时22分06秒
 ************************************************************************/

#include "reverse.h"
/*
 * 将字符串从头到尾进行翻转
 * */

void reverse(char *pStart, char *pEnd)
{
	if(pStart==NULL || pEnd==NULL)
		return;

	while(pStart < pEnd)
	{
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;
		pStart++;
		pEnd--;
	}
}
/*
 * 输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不改变，为简单起见，标点符号和普通字母一样处理。
 * */
int ReverseSentence(char *pData)
{
	int ret = 0;
	if(pData==NULL)
	{
		ret = -1;
		return ret;
	}
	char *pStart = pData;
	char *pEnd = pData;
	while(*pEnd!='\0')
		pEnd++;
	pEnd--;

	reverse(pStart, pEnd);

	pStart = pEnd = pData;

	while(*pStart!='\0')
	{
		if(*pStart==' ')
		{
			pStart++;
			pEnd++;
		}
		else if(*pEnd == ' '||*pEnd == '\0')
		{
			reverse(pStart,--pEnd);
			pStart = ++pEnd;
		}
		else
			pEnd++;
	}
	return ret;
}

char *LeftRotateString(char *pStr, int n)
{
	if(pStr==NULL)
		return NULL;

	int length = strlen(pStr);
	char *FirstStart = pStr;
	char *FirstEnd = pStr+n-1;
	char *SecondStart = pStr+n;
	char *SecondEnd = pStr+length-1;

	if(n>0 && n<length && length>0)
	{
		reverse(FirstStart,FirstEnd);
		reverse(SecondStart,SecondEnd);
		reverse(FirstStart,SecondEnd);
	}

	return pStr;
}


