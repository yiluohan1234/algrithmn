/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月23日 星期一 17时06分57秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fib.h"
// ====================测试代码====================
void Test(int n, int expected)
{
    if(Fib(n) == expected)
        printf("Test for %d in solution1 passed.\n", n);
    else
        printf("Test for %d in solution1 failed.\n", n);

    if(Fib_ld(n) == expected)
        printf("Test for %d in solution2 passed.\n", n);
    else
        printf("Test for %d in solution2 failed.\n", n);

}

int main()
{
    Test(0, 0);
    Test(1, 1);
    Test(2, 1);
    Test(3, 2);
    Test(4, 3);
    Test(5, 5);
    Test(6, 8);
    Test(7, 13);
    Test(8, 21);
    Test(9, 34);
    Test(10, 55);

    Test(40, 102334155);

    return 0;
}

