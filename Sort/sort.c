/*************************************************************************
	> File Name: sort.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年06月23日 星期四 16时21分16秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

void PrintNums(int *nums, int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("%d ", nums[i]);

	}
	printf("\n");
}
void merge(int *nums, int lo, int mid, int hi)
{
	int first = lo, second = mid+1;
	int aux[MAXSIZE], i;

	for (i = lo; i <= hi; i++)
	{
		aux[i] = nums[i];
	}

	for (i = lo; i <= hi; i++)
	{
		if (first > mid)
			nums[i] = aux[second++];
		else if (second > hi)
			nums[i] = aux[first++];
		else if (aux[first]<aux[second])
			nums[i] = aux[first++];
		else
			nums[i] = aux[second++];
	}
}
void MSort(int *nums, int lo, int hi)
{
	int mid = lo + (hi - lo)/2;
	if(lo < hi)
	{
		MSort(nums, lo, mid);
		MSort(nums, mid+1, hi);

		merge(nums, lo, mid, hi);
	}
}

void MergeSort(int *nums, int length)
{
	MSort(nums, 0, length - 1);
}

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
int partition2(int *data, int length, int start, int end)
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
int partition(int *nums, int lo, int hi)
{
	int point;
	point = nums[lo];
	while(lo < hi)
	{
		while(lo < hi && nums[hi] >= point)
		{
			hi--;
		}
		nums[lo] = nums[hi];
		while(lo < hi && nums[lo] <= point)
		{
			lo++;
		}
		nums[hi] = nums[lo];
	}
	nums[lo] = point;
	return lo;
}
void Qsort(int *nums, int lo, int hi)
{
	int point;
	if (lo < hi)
	{
		point = partition2(nums, hi-lo+1, lo, hi);
		//point = partition(nums, lo, hi);
		Qsort(nums, lo, point-1);
		Qsort(nums, point+1, hi);
	}
}
void quicksort(int *nums, int left, int right)
{
	if (left < right)
	{
		int point = nums[left];
		int lo = left;
		int hi = right;
		while (lo < hi)
		{
			while (lo < hi && nums[hi] > point)
				hi--;
			nums[lo] = nums[hi];
			while (lo < hi && nums[lo] < point)
				lo++;
			nums[hi] = nums[lo];
		}
		nums[lo] = point;
		quicksort(nums, left , lo);
		quicksort(nums, lo+1, right);
		
	}
}
void QuickSort(int *nums, int length)
{
	//Qsort(nums, 0, length-1);
	quicksort(nums, 0, length-1);
}

