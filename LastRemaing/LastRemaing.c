/*************************************************************************
	> File Name: LastRemaing.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年04月05日 星期二 10时13分22秒
 ************************************************************************/

#include "LastRemaing.h"

int LastRemaing(unsigned int n, unsigned int m)
{
	int ret = 0;
	if(n<1 || m<1)
	{
		ret = -1;
		return ret;
	}
	
	int i = 0;
	for(i=2; i<=n; i++)
	{
		ret = (ret+m)%i;
	}

	return ret;
}
int Test(char *name, unsigned int n, unsigned int m, int expected)
{
	int ret = 0;

	if(name == NULL || n<1 || m <1)
	{
		ret = -1;
		return ret;
	}

	if(LastRemaing(n, m) == expected)
	{
		printf("The Test:%s pass!\n", name);
	}
	else
		printf("The Test:%s fail!", name);

	return 0;
}
/*
int solution2(unsigned int n, unsigned int m)
{
	if(n<1 || m<1)
	{
		return -1;
	}
	unsigned int i = 0;
	list<int> numbers;

	for(i=0; i<n; i++)
		numbers.push_back(i);
	
	list<int>::iterator current = numbers.begin();
	while(numbers.size()>1)
	{
		for(i=0; i<m; i++)
		{
			current ++;
			if(current == numbers.end())
				current= numbers.begin();
		}
		list<int> iterator next = ++current;
		if(next == numbers.end())
			next = numbers.begin();
		--current;
		numbers.erase(current);
		current = next;
		
	}
	return *current;
}
*/
