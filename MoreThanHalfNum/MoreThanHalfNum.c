/*************************************************************************
	> File Name: MoreThanHalfNum.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月26日 星期二 09时12分03秒
 ************************************************************************/


#include "MoreThanHalfNum.h"
int Range(int start, int end)
{
	int ret = start + rand()%(end - start + 1);
	return ret;
}
void swap(int *num1, int *num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
int partition(int *data, int length, int start, int end)
{
	int small = 0;
	if (data == NULL || length < 0)
	{
		small = -1;
		printf("func partition() err:%d\n", small);
		return small;
	}

	int index = Range(start, end);
	swap(&data[index], &data[end]);

	small = start - 1;
	for (index = start; index < end; ++index)
	{
		if (data[index] < data[end])
		{
			++small;
			if (small != index)
				swap(&data[small], &data[index]);
		}
	}
	++small;
	swap(&data[small], &data[end]);

	return small;
}
/*
 * 判断输入是否有效
 * */
int CheckInvalidArray(int *numbers, int length)
{
	int ret = 0;
	if (numbers == NULL || length < 0)
	{
		ret = 1;
	}
	return ret;
}
/*
 * 数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字
 * */
int MoreThanHalfNum1(int *numbers, int length)
{
	if (CheckInvalidArray(numbers, length))
	{
		return 0;
	}
	int middle = length>>1;
	int start = 0;
	int end = length - 1;
	int index = partition(numbers, length, start, end);
	while(index != middle)
	{
		if (index > middle)
		{
			end = index - 1;
			index = partition(numbers, length, start, end);
		}
		else
		{
			start = index + 1;
			index = partition(numbers, length, start, end);
		}
	}
	int result = numbers[index];
	if (CheckMoreHalf(numbers, length, result) != 0)
		return 0;
	return result;
}
int CheckMoreHalf(int *numbers, int length, int result)
{
	int ret = 0;
	int i = 0;
	int times = 0;
	for (i = 0; i < length; i++)
	{
		if (numbers[i] == result)
		{
			times++;
		}
	}
	if (times*2 <= length)
	{
		ret = 1;
	}
	return ret;
}
int MoreThanHalfNum2(int *numbers, int length)
{
	if (CheckInvalidArray(numbers, length))
		return 0;
	int result = numbers[0];
	int times = 1;
	int i = 1;
	for (i = 1; i < length; i++)
	{
		if (times == 0)
		{
			result = numbers[i];
			times = 1;
		}
		else if (numbers[i] == result)
		{
			times++;
		}
		else
			times--;
	}
	if (CheckMoreHalf(numbers, length, result))
		return 0;
	return result;
}
