/*************************************************************************
	> File Name: binarySearch.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: Mon 05 Nov 2018 11:41:40 AM CST
************************************************************************/
#include "binarySearch.h"
/*
 * 二分查找原始查找
 * 
 */
int binarySearch(int *data, int length, int key)
{
	int l = 0; 
	int h = length - 1;
	while(l <= h)
	{
		int m = l + (h - l)/2;
		if (data[m] == key)
		{
			return m;
		}
		else if(data[m] > key)
		{
			h = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return -1;
}
/*
 * leetcode 69 求平方根
 */
int mySqrt(int x)
{
	if (x == 1)
		return 1;
	int l = 1;
	int h = x;
	while (l <= h)
	{
		int mid = l + (h - l)/2;
		int sqrt = x/mid;
		if (sqrt == mid)
			return mid;
		else if (sqrt < mid)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return h;
}
