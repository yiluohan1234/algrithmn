/*************************************************************************
	> File Name: FindContinuousSequence.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月26日 星期六 13时07分14秒
 ************************************************************************/

#include "FindContinuousSequence.h"

void FindContinuousSequence(int sum)
{
	if(sum < 3)
		return;
	int small = 1;
	int big = 2;
	int middle = (1+sum)>>1;

	int curSum = small+big;
	while(small < middle)
	{
		
		if(curSum==sum)
			PrintContious(small, big);
		while(curSum >sum && small<middle)
		{
			curSum -= small;
			small++;
			if(curSum==sum)
				PrintContious(small, big);
		}
		big++;
		curSum += big;
	}
}
void PrintContious(int start, int end)
{
	int i;

	for(i=start; i<=end; i++)
		printf("%d ", i);
	printf("\n");
}
