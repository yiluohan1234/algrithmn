/*************************************************************************
	> File Name: findKthToTail.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月19日 星期四 09时32分11秒
 ************************************************************************/

#include "findKthToTail.h"
struct ListNode *findKthToTail(struct ListNode *pHead, unsigned int k)
{
	if (pHead == NULL || k==0)
		return NULL;
	struct ListNode *pFirst = pHead;
	struct ListNode *pLast = NULL;
	unsigned int i = 0;
	for (i=0; i< k-1; i++)
	{
		if (pFirst->next != NULL)
			pFirst = pFirst->next;
		else
			return NULL;
	}
	pLast = pHead;
	while (pFirst->next != NULL)
	{
		pFirst = pFirst->next;
		pLast = pLast->next;
	}
	return pLast;

}
