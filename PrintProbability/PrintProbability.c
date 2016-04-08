/*************************************************************************
	> File Name: PrintProbability.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月28日 星期一 11时33分37秒
 ************************************************************************/

#include "PrintProbability.h"

int g_maxvalue = 6;
int PrintProbability(int number)
{
	int ret = 0;
	if (number < 1)
	{
		ret = -1;
		return ret;
	}

	int maxvalue = number*g_maxvalue;
	int pProbability[maxvalue-number+1];
	int i;

	for(i=number; i<=maxvalue; i++)
		pProbability[i-number]=0;
	Probability(number, pProbability);

	int total = pow((double)g_maxvalue, (double)number);
	for(i=number; i<=maxvalue; i++)
	{
		double ratio = (double)pProbability[i-number]/total;
		printf("%d:%e\n", i, ratio);
	}

	return ret;
}
int Probability(int number, int *pProbability)
{
	int ret = 0;
	if (number < 1 || pProbability == NULL)
	{
		ret = -1;
		printf("func Probability() err:%d, input:%s", ret, "pProbability");
		return ret;
	}
	
	int i;
	for(i=1; i<=g_maxvalue; i++)
		Prob(number, number, i, pProbability);

	return ret;
}
int Prob(int original, int current, int sum, int *pProbability)
{
	int ret = 0;
	if (pProbability == NULL)
	{
		ret = -1;
		printf("func Probability() err:%d, input:%s", ret, "pProbability");
		return ret;
	}

	int i;
	if(current==1)
		pProbability[sum-original]++;
	else
	{
		for(i=1;i<=g_maxvalue;i++)
			Prob(original, current-1, i+sum, pProbability);
	}
	return ret;
}

