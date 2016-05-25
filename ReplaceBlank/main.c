/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月25日 星期三 15时36分38秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "replaceBlank.h"
#define LENGTH 100
void Test(char* testName, char string[], int length, char expected[])
{
    if(testName != NULL)
        printf("%s begins: ", testName);

    replaceBlank(string, length);

    if(expected == NULL && string == NULL)
        printf("passed.\n");
    else if(expected == NULL && string != NULL)
        printf("failed.\n");
    else if(strcmp(string, expected) == 0)
        printf("passed.\n");
    else
        printf("failed.\n");
}

// 空格在句子中间
void Test1()
{

    char string[LENGTH] = "hello world";
    Test("Test1", string, LENGTH, "hello%20world");
}

// 空格在句子开头
void Test2()
{

    char string[LENGTH] = " helloworld";
    Test("Test2", string, LENGTH, "%20helloworld");
}

// 空格在句子末尾
void Test3()
{

    char string[LENGTH] = "helloworld ";
    Test("Test3", string, LENGTH, "helloworld%20");
}

// 连续有两个空格
void Test4()
{

    char string[LENGTH] = "hello  world";
    Test("Test4", string, LENGTH, "hello%20%20world");
}

// 传入NULL
void Test5()
{
    Test("Test5", NULL, 0, NULL);
}

// 传入内容为空的字符串
void Test6()
{

    char string[LENGTH] = "";
    Test("Test6", string, LENGTH, "");
}

//传入内容为一个空格的字符串
void Test7()
{

    char string[LENGTH] = " ";
    Test("Test7", string, LENGTH, "%20");
}

// 传入的字符串没有空格
void Test8()
{

    char string[LENGTH] = "helloworld";
    Test("Test8", string, LENGTH, "helloworld");
}

// 传入的字符串全是空格
void Test9()
{

    char string[LENGTH] = "   ";
    Test("Test9", string, LENGTH, "%20%20%20");
}

int main()
{
    Test1();
    Test2();
    Test3();
    Test4();
    Test5();
    Test6();
    Test7();
    Test8();
    Test9();

    return 0;
}

