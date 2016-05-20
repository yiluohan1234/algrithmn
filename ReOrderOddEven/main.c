/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月20日 星期五 09时08分22秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reOrderOddEven.h"
void PrintArray(int numbers[], int length)
{
    if(length < 0)
        return;

	int i = 0;
    for(i = 0; i < length; ++i)
        printf("%d\t", numbers[i]);

    printf("\n");
}

void Test(char* testName, int numbers[], int length)
{
    if(testName != NULL)
        printf("%s begins:\n", testName);

    int* copy = (int *)malloc(length*sizeof(int));
	int i = 0;
    for(i = 0; i < length; ++i)
    {
        copy[i] = numbers[i];
    }

    printf("Test start:\n");
    PrintArray(numbers, length);
    reOrderOddEven(numbers, length);
    PrintArray(numbers, length);


	free(copy);
}

void Test1()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    Test("Test1", numbers, sizeof(numbers)/sizeof(int));
}
int main()
{
	Test1();
	return 0;
}
