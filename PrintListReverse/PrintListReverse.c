/*************************************************************************
	> File Name: PrintListReverse.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月25日 星期三 14时11分48秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PrintListReverse.h"
void PrintListReverse(struct ListNode *pHead)
{
	if (pHead != NULL)
	{
		if (pHead->next != NULL)
		{
			PrintListReverse(pHead->next);
		}
		printf("%d\t", pHead->data);
	}
}
