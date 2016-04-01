/*************************************************************************
	> File Name: GetNumOf1.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月24日 星期四 10时11分18秒
 ************************************************************************/

#include "GetNumOf1.h"

int GetNumOf1_solution1(int n)
{
	int count = 0;

	while(n)
	{
		if(n&1)
			++count;
		n = n>>1;
	}

	return count;
}

int GetNumOf1_solution2(int n)
{
	int count = 0;
	unsigned int flag = 1;
	
	while(flag)
	{
		if(flag&n)
			++count;

		flag = flag<<1;
	}

	return count;
}

int GetNumOf1_solution3(int n)
{
	int count = 0;
	while(n)
	{
		++count;
		n = (n-1)&n;
	}

	return count;
}


