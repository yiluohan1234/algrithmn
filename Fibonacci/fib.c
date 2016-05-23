/*************************************************************************
	> File Name: fib.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月23日 星期一 17时05分01秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fib.h"
// ====================方法1：递归====================
long long Fib(unsigned int n)
{
    if(n <= 0)
        return 0;

    if(n == 1)
        return 1;

    return Fib(n - 1) + Fib(n - 2);
}

// ====================方法2：循环====================
long long Fib_ld(unsigned n)
{
    int result[2] = {0, 1};
    if(n < 2)
        return result[n];

    long long  fibNMinusOne = 1;
    long long  fibNMinusTwo = 0;
    long long  fibN = 0;
	unsigned int i;
    for(i = 2; i <= n; ++ i)
    {
        fibN = fibNMinusOne + fibNMinusTwo;

        fibNMinusTwo = fibNMinusOne;
        fibNMinusOne = fibN;
    }

     return fibN;
}

