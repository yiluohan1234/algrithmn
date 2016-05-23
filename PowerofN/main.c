/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月23日 星期一 16时39分56秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "power.h"
#include <math.h>
int g_InvalidInput = 0;
// ====================测试代码====================
void Test(double base, int exponent, double expectedResult, int expectedFlag)
{
    double result = power(base, exponent);
    if(abs(result - expectedResult) < 0.00000001 && g_InvalidInput == expectedFlag)
        printf("Test passed.\n");
    else
        printf("Test failed.\n");
}

int main()
{
    // 底数、指数都为正数
    printf("Test1 begins.\n");
    Test(2, 3, 8, 0);

    // 底数为负数、指数为正数
    printf("Test2 begins.\n");
    Test(-2, 3, -8, 0);

    // 指数为负数
    printf("Test3 begins.\n");
    Test(2, -3, 0.125, 0);

    // 指数为0
    printf("Test4 begins.\n");

    Test(2, 0, 1, 0);

    // 底数、指数都为0
    printf("Test5 begins.\n");
    Test(0, 0, 1, 0);

    // 底数为0、指数为正数
    printf("Test6 begins.\n");
    Test(0, 4, 0, 0);

    // 底数为0、指数为负数
    printf("Test7 begins.\n");
    Test(0, -4, 0, 1);

    return 0;
}

