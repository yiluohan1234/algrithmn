/*************************************************************************
	> File Name: reverseList.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月19日 星期四 08时55分50秒
 ************************************************************************/

#include "reverseList.h"
struct ListNode *reverseList(struct ListNode *pHead)
{
	if (pHead == NULL)
		return pHead;
	struct ListNode *pCur = pHead;
	struct ListNode *pNext = pHead->next;
	pCur->next = NULL;
	
	while (pNext != NULL)
	{
		struct ListNode *tmp = pNext->next;
		pNext->next = pCur;
		pCur = pNext;
		pNext = tmp;
	}
	return pCur;
}
