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
 * leetcode 69:Sqrt(x) (Easy)
 * 题目描述:求平方根
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
/*
 * leetcode 744. Find Smallest Letter Greater Than Target (Easy)
 * 题目描述:给定一个有序的字符数组 letters 和一个字符 target，要求找出 letters 中大于 target 的最小字符，如果找不到就返回第 1 个字符
 */
char nextGreatestLetter(char *data, int length, char target)
{
	int l = 0;
	int h = length - 1;
	while (l<=h)
	{
		int m = l + (h - l)/2;
		if (data[m] <= target)
			l = m + 1;
		else 
		{
			h = m - 1;
		}
	}
	return l < length? data[l]:data[0];
}
/*
 * leetcode 540. Single Element in a Sorted Array (Medium)
 * 题目描述:给定一个有序的数组，查找数组中只出现一次的数字
 */
int singleNonDuplicate(int *data, int length)
{
	int l = 0;
	int h = length - 1;
	while( l < h )
	{
		int m = l + (h - l)/2;
		if (m%2 == 1)
			m--; // 保证 l/h/m 都在偶数位，使得查找区间大小一直都是奇数
		if( data[m] == data[m+1] )
			l = m + 2;
		else
			h = m;
	}
	return data[l];
}
