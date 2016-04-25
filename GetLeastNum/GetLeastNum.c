/*************************************************************************
	> File Name: GetLeastNum.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月25日 星期一 14时59分50秒
 ************************************************************************/

#include "GetLeastNum.h"
/*
 * 产生start到end的随机数
 * */
int randomInRange(int start, int end)
{
	int ret = start + rand()%(end - start + 1);
	return ret;
}
/*
 * 交换两个数字的位置
 * */
void swap(int *num1, int *num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
/*
 * 返回选中数字位置，并使得选中的数字的左边的数都小于data[index],选中
 * 数字右边的数都大于data[index]
 * */
int partition(int *data, int length, int start, int end)
{
	int ret = 0;
	if (data == NULL || length < 0 ||start < 0 || end >= length)
	{
		ret = -1;
		printf("func partition() err:%d\n", ret);
		return ret;
	}

	int index = randomInRange(start, end);
	swap(&data[index], &data[end]);

	int small = start - 1;

	for (index = start; index < end; index++)
	{
		if(data[index] < data[end])
		{
			++small;
			if (small != index)
			{
				swap(&data[index], &data[small]);
			}

		}

	}
	++small;
	swap(&data[small],&data[end]);

	return small;
}

void GetLeastNum(int *input, int n, int *output, int k)
{
	if (input == NULL || output == NULL ||k > n||k <= 0)
	{
		return ;
	}

	int start = 0;
	int end = n - 1;
	int i = 0;
	int index = partition(input, n, start, end);
	while (index != k-1)
	{
		if (index > k-1)
		{
			end = index - 1;
			index = partition(input, n, start, end);

		}
		else
		{
			start = index + 1;
			index = partition(input, n, start, end);
		}

	}

	for (i = 0; i < k; i++)
	{
		output[i] = input[i];
	}

}
