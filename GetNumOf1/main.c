/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月24日 星期四 10时18分35秒
 ************************************************************************/

#include "GetNumOf1.h"

int main()
{
	int number;

	printf("please input a number:\n");
	scanf("%d",&number);

	printf("the number of 1 is %d in solution1\n",GetNumOf1_solution1(number));
	printf("the number of 1 is %d in solution2\n",GetNumOf1_solution2(number));
	printf("the number of 1 is %d in solution3\n",GetNumOf1_solution3(number));

	return 0;
}
