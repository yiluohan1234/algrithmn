/*************************************************************************
	> File Name: printMatrixClockwise.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月13日 星期五 10时11分51秒
 ************************************************************************/
#include "printMatrixClockwise.h"
/*
 * 输入一个矩阵，按照从外到里以顺时针的顺序依次打印每一个数字
 * */
void printMatrixInCircle(int **numbers, int columns, int rows, int start)
{
	int columnsLen = columns - 1 - start;
	int rowsLen = rows - 1 - start;
	int i = 0;
	//打印第一行
	for (i = start; i <=columnsLen; i++)
	{
		int number = numbers[start][i];
	    printf("%d ", number);	
	}
	//打印最后一列
	if (start < rowsLen)
	{
		for ( i = start + 1; i <= rowsLen; i++ )
		{
			int number = numbers[i][rowsLen];
			printf("%d ", number);
		}
	}
	//打印最后一行
	if (start < rowsLen && start <columnsLen)
	{
		for (i = columnsLen - 1; i >= start; i--)
		{
			int number = numbers[rowsLen][i];
			printf("%d ", number);
		}
	}
	//打印第一列
	if (start < rowsLen - 1 && start < columnsLen)
	{
		for (i = rowsLen - 1; i > start; i--)
		{
			int number = numbers[i][start];
			printf("%d ", number);
		}
	}
}
void printMatrixClockwise(int **numbers, int columns, int rows)
{
	if (numbers == NULL || columns <= 0 || rows <= 0)
		return ;
	int start = 0;
	while (columns > start*2 && rows > start*2)
	{
		printMatrixInCircle(numbers, columns, rows, start);
		++start;
	}
}
