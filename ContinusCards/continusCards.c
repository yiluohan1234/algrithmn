/*************************************************************************
	> File Name: continusCards.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年04月06日 星期三 14时56分30秒
 ************************************************************************/

#include "continusCards.h"

/*
 * 从扑克牌中随机抽取5张牌，判断是不是一个顺子，即这5张牌是不是连续的
 * 2-10位数字本身，A为1，J为11，Q为12，K为13，而大小王可以看成任意数字
 * */
int InsertSort(int *numbers, int length)
{
	int ret = 0;
	if (numbers == NULL || length < 1)
	{
		ret = -1;
		printf("func InsertSort() err:param\n");
	}

	int i = 0, j = 0;
	int temp = 0;

	for (i = 0; i < length; i++)
	{
		for (j = i + 1; j < length; j++)
		{
			if (numbers[i] > numbers[j])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	return ret;
}
int IsContinous(int *numbers, int length)
{
	/*
	 * 先将数组进行排序，然后记录数组中0的个数
	 * 记录数组中的差距和，比较0的个数和数组差距
	 * */
	int ret = 0;
	if (numbers == NULL || length <1)
	{
		ret = -1;
		return -1;
	}

	int IsZero = 0;
	int GapLen = 0;
	int i = 0;

	for (i = 0; i < length; i ++)
	{
		if (numbers[i] == 0)
		{
			IsZero ++;
		}

	}

	InsertSort(numbers, length);
	int pBegin = IsZero;
	int pEnd = IsZero + 1;
	
	while (pEnd < length)
	{
		if (numbers[pBegin] == numbers[pEnd])
			ret = 1;
		
		GapLen = numbers[pEnd] - numbers[pBegin] - 1;
		pBegin = pEnd;
		pEnd ++;
	}

	if (GapLen > IsZero)
		ret = 1;

	return ret;
}
