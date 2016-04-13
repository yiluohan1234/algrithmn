/*************************************************************************
	> File Name: FindNumsAppearOnce.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月26日 星期六 13时40分08秒
 ************************************************************************/

#include "FindNumsAppearOnce.h"

void FindNumsAppearOnce(int *data, int length, int *num1, int *num2)
{
	if(data==NULL ||length <0)
		return ;
	int resultOfxor = 0;
	int i;

	for(i=0; i<length; i++)
		resultOfxor ^= data[i];

	int locationOf1 = FindFirstBitOf1(resultOfxor);
	*num1 = *num2 = 0;

	for(i=0; i<length; i++)
	{
		if(IsBitOf1(data[i], locationOf1))
		{
			*num1 ^= data[i];
		}
		else
			*num2 ^= data[i];
	}
}
int FindFirstBitOf1(int num)
{
	int indexOf1 = 0;

	while(((num&1) == 0)&& indexOf1<8*sizeof(int))
	{
		num = num>>1;
		++indexOf1;
	}

	return indexOf1;
}

int IsBitOf1(int num, int indexOf1)
{
	int flag = 0;

	if(((num>>indexOf1)&1) == 1)
		flag = 1;

	return flag;
}
