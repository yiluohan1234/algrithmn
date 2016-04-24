/*************************************************************************
	> File Name: FindGreateNumOfSubArray.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月24日 星期日 17时33分14秒
 ************************************************************************/

#include "FindGreateNumOfSubArray.h"

int FindGreateNumOfSubArray(int *data, int length)
{
	int ret = 0;
	if (data == NULL || length < 0)
	{
		ret = -1;
		return ret;
	}
	int curSum = 0;
	int retSum = 0x80000000;

	int i = 0;

	for (i = 0; i< length; i ++)
	{
		if (curSum <= 0)
			curSum = data[i];
		else
			curSum += data[i];
		if (curSum > retSum)
			retSum = curSum;

	}

	return retSum;
}
