/*************************************************************************
	> File Name: deleteNode.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月20日 星期五 09时45分37秒
 ************************************************************************/

#include "deleteNode.h"

void deleteNode(struct ListNode **pListHead, struct ListNode *pToBeDeleted)
{
	if (!pListHead || !pToBeDeleted)
		return ;
	//中间节点
	if (pToBeDeleted->next != NULL)
	{
		struct ListNode *pNext = pToBeDeleted->next;
		pToBeDeleted->data = pNext->data;
		pToBeDeleted->next = pNext->next;
		free(pNext);
		pNext = NULL;
	}
	//头结点
	else if (*pListHead == pToBeDeleted)
	{
		free(pToBeDeleted);
		pToBeDeleted = NULL;
		*pListHead = NULL;
	}
	//尾结点
	else
	{
		struct ListNode *pNode = *pListHead;
		while (pNode->next != pToBeDeleted)
		{
			pNode = pNode->next;
		}
		pNode->next = NULL;
		free(pToBeDeleted);
		pToBeDeleted = NULL;
	}
}
