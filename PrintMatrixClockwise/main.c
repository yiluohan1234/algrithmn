/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月13日 星期五 11时03分59秒
 ************************************************************************/

#include "printMatrixClockwise.h"

void Test(int columns, int rows)
{
    printf("Test Begin: %d columns, %d rows.\n", columns, rows);

    if(columns < 1 || rows < 1)
        return;

	int i = 0, j = 0;
    int **numbers = (int **)malloc(rows*sizeof(int *));
	for (i = 0; i< rows; i++)
	{
		numbers[i] = (int *)malloc(columns*sizeof(int));
	}
	
    for(i = 0; i < rows; ++i)
    {
        for(j = 0; j < columns; ++j)
        {
            numbers[i][j] = i * columns + j + 1;
        }
    }

    printMatrixClockwise(numbers, columns, rows);
    printf("\n");

	if (numbers != NULL)
	{
		for (i = 0; i < rows; i++)
		{
			if (numbers[i] != NULL)
				free(numbers[i]);
		}

		free(numbers);
	}

}
int main()
{
	Test(4,4);
	return 0;
}
