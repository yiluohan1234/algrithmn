/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年06月23日 星期四 16时29分46秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

int main()
{
	int a[10] = {1,9,2,5,8,4,0,3,6,7};
	PrintNums(a, 10);

	QuickSort(a, 10);
	PrintNums(a, 10);
	return 0;
}
