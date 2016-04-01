/*************************************************************************
	> File Name: GetNumOfKey.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月24日 星期四 09时23分12秒
 ************************************************************************/

#include "GetNumOfKey.h"

/*
 * 得到数组中第一个查找的数字的下标
 * */
int GetFirstKey(int *data, int length, int k, int start, int end)
{
	if(start > end)
		return -1;

	int middle = (start+end)>>1;
	int middledata = data[middle];

	if(middledata == k)
	{
		if((middle>0 && (data[middle-1]!=k)) || (middle == 0))
			return middle;
		else
			end = middle-1;
	}

	else if(middledata < k)
		start = middle+1;
	else
		end = middle-1;

	return GetFirstKey(data, length, k, start, end);
}

/*
 * 得到数组中最后一个查找的数字的下标
 * */
int GetLastKey(int *data, int length, int k, int start, int end)
{

	if(start > end)
		return -1;

	int middle = (start + end)>>1;
	int middledata = data[middle];

	if(middledata == k)
	{
		if(((middle < length-1)&&(data[middle+1]!=k))||(middle == length-1))
			return middle;
		else
			start = middle+1;
	}
	else if(middledata < k)
		start = middle+1;
	else
		end = middle-1;

	return GetLastKey(data, length, k, start, end);
}

/*
 * 得到数组中要查找数字的个数
 * */

int GetNumOfKey(int *data, int length, int k)
{
	int number = 0;

	if(data!=NULL && length >0)
	{
		int first = GetFirstKey(data, length, k, 0, length-1);
		int last = GetLastKey(data, length, k, 0, length-1);

		if(first > -1 && last > -1)
			number = last-first+1;
	}

	return number;
}
