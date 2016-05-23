/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月22日 星期日 14时08分00秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "print1ToMax.h"
// ====================测试代码====================
void Test(int n)
{
    printf("Test for %d begins:\t", n);

    print1ToMax_1(n);
    print1ToMax_2(n);

    printf("Test for %d ends.\n", n);
}
int main()
{
	Test(1);
	Test(2);
	Test(3);
	Test(0);
	return 0;
}

