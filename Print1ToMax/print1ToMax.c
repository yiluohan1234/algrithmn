/*************************************************************************
	> File Name: print1ToMax.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月22日 星期日 13时53分23秒
 ************************************************************************/

#include "print1ToMax.h"
int InCrement(char *number)
{
	int isOver = 0;
	int nStart = 0;
	int length = strlen(number);
	int i;

	for (i = length - 1; i>=0; i--)
	{
		int nSum = number[i] -'0' + nStart;
		if (i == length - 1)
		{
			nSum++;
		}
		if (nSum >=10)
		{
			if (i == 0)
			{
				isOver = 1;
			}
			else
			{
				nSum -= 10;
				nStart = 1;
				number[i] = '0' + nSum;
			}
		}
		else
		{
			number[i] = '0' + nSum;
			break;
		}
	}
	return isOver;
}
void printNumber(char *number)
{
	int ret = 1;
	int length = strlen(number);
	int i = 0;
	for (i=0; i<length; i++)
	{
		if(ret&&number[i]!='0')
		{
			ret = 0;
		}
		if (!ret)
		{
			printf("%c", number[i]);
		}
	}
	printf("\t");

}

void print1ToMax_1(int n)
{
	if (n <= 0)
		return ;
	char *number = (char *)malloc((n+1)*sizeof(char));

	memset(number, '0', n);
	number[n] = '\0';

	while ( !InCrement(number) )
	{
		printNumber(number);
	}
	printf("\n");

	free(number);
}
void Print1ToMaxRecursively(char *number, int length, int index)
{
	if (index == length - 1)
	{
		printNumber(number);
		return ;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		number[index+1] = i + '0';
		Print1ToMaxRecursively(number, length, index+1);
	}
}
void print1ToMax_2(int n)
{
	if (n <= 0)
		return ;
	char *number = (char *)malloc((n+1)*sizeof(char));
	number[n] = '\0';

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		number[0] = i + '0';
		Print1ToMaxRecursively(number, n, 0);
	}
	
	free(number);
}
