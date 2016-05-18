/*************************************************************************
	> File Name: mergeList.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月18日 星期三 13时55分40秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mergeList.h"

struct ListNode *mergeList(struct ListNode *pHead1, struct ListNode *pHead2)
{
	if (pHead1 == NULL)
		return pHead2;
	else if (pHead2 == NULL)
		return pHead1;

	struct ListNode *pRet = NULL;
	if (pHead1->data < pHead2->data)
	{
		pRet = pHead1;
		pRet->next = mergeList(pHead1->next, pHead2);
	}
	else if (pHead1->data >= pHead2->data)
	{
		pRet = pHead2;
		pRet->next = mergeList(pHead1, pHead2->next);
	}
	return pRet;
	
}
