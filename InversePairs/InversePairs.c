/*************************************************************************
	> File Name: InversePairs.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月18日 星期一 09时46分18秒
 ************************************************************************/

#include "InversePairs.h"

static int InversePairsCore(int *data, int *copy, int start, int end)
{
	if (start == end)
	{
		copy[start] = data[start];
		return 0;
	}
	int length = (end - start)>>1;
	int left = InversePairsCore(data, copy, start, start+length);
	int right = InversePairsCore(data, copy, start+length+1, end);
	int i = start + length;
	int j = end;
	int indexcopy = end;
	int count = 0;

	while (i>= start && j >= start + length + 1)
	{
		if (data[i] > data[j])
		{
			copy[indexcopy--] = data[i--];
			count += j - start - length;
		}
		else
		{
			copy[indexcopy--] = data[j--];
		}

	}

	for ( ; i >= start; --i ) 
		copy[indexcopy--] = data[i];
	for ( ; j >= start + length + 1; --j ) 
		copy[indexcopy--] = data[j];

	return left + right + count;
}
int InversePairs(int *data, int length)
{
	if (data == NULL || length < 0)
		return 0;
	int *copy = (int *)malloc(length*sizeof(int));
	int i = 0;
	for (i = 0; i < length; i ++)
		copy[i] = 0;

	int count = InversePairsCore(data, copy, 0, length-1);

	if (copy != NULL)
		free(copy);

	return count;
}
