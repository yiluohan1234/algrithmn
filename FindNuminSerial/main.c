/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月25日 星期三 15时58分43秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Find(int *matrix, int rows, int columns, int number)
{
	int ret = 0;
	if (matrix != NULL && rows > 0 && columns > 0)
	{
		int row = 0;
		int column = columns -1;
		while (row < rows && column >=0)
		{
			if (matrix[row*columns + column] == number)
			{
				ret = 1;
				break;
			}
			else if (matrix[row*columns + column] >number)
			{
				column--;
			}
			else
				row++;
		}
	}
	return ret;
}
int main()
{
	int matrix[] = {1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
	int number = 7;
	if (Find(matrix, 4, 4, number))
	{
		printf("find!\n");
	}
	else
		printf("not find\n");
	return 0;
}
