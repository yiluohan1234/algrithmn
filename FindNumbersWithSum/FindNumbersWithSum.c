/*************************************************************************
	> File Name: FindNumbersWithSum.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月26日 星期六 12时35分38秒
 ************************************************************************/

#include "FindNumbersWithSum.h"
int FindNumbersWithSum(int *data, int length, int sum, int *num1, int *num2)
{
	int ret = 0;
	if (data==NULL||num1==NULL||num2==NULL)
	{
		ret = -1;
		return ret;
	}

	int pBegin = 0;
	int pEnd = length-1;
	
	while(pBegin < pEnd)
	{
		int curSum = data[pBegin] + data[pEnd];
		if (curSum == sum)
		{
			ret = 1;
			*num1 = data[pBegin];
			*num2 = data[pEnd];
			break;
		}
		else if(curSum<sum)
			pBegin++;
		else
			pEnd--;
	}

	return ret;
}
