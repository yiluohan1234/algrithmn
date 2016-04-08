/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月28日 星期一 11时33分48秒
 ************************************************************************/

/*
 * 把n个骰子扔在地上，所有骰子朝上一面的点数之和为s。输入n，打印s的所有可能的值得出现的概率
 * */

#include "PrintProbability.h"

int main()
{
	int ret = 0;
	int number = 2;
	ret = PrintProbability(number);
	if (ret == -1)
	{
		printf("func PrintProbability() err:%d,input:%d\n", ret, number);
	}

	return 0;
}
