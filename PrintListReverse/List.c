/*************************************************************************
	> File Name: List.cpp
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月23日 星期三 17时32分11秒
 ************************************************************************/

#include "List.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * 创建一个链表的结点
 * */
struct ListNode *CreateListNode(int value)
{
	struct ListNode *pNode =(struct ListNode *)malloc(sizeof(struct ListNode));
	pNode->data = value;
	pNode->next = NULL;

	return pNode;
}
/*
 * 将两个结点连接起来
 * */
void ConnectListNodes(struct ListNode *pCurrent, struct ListNode *pNext)
{
	if(!pCurrent)
	{
		printf("ERROR!connect two ListNode.\n");
		exit(1);
	}
	pCurrent->next = pNext;
}
/*
 * 打印结点
 * */
void PrintListNode(struct ListNode *pNode)
{
	if(!pNode)
	{
		printf("the node is null!\n");
		exit(1);
	}
	printf("The value of the node is %d\n",pNode->data);
}
/*
 * 打印链表
 * */
void PrintList(struct ListNode *pHead)
{
	printf("print the list:\n");
	struct ListNode *pNode = pHead;
	if(!pNode)
	{
		printf("the list is null\n");
		exit(1);
	}
	while(pNode != NULL)
	{
		printf("%d ",pNode->data);
		pNode = pNode->next;
	}
}
/*
 * 在链表结尾添加结点
 * */
void AddToTail(struct ListNode **pHead, int value)
{
	struct ListNode *pNew = (struct ListNode*)malloc(sizeof(struct ListNode));
	pNew->data = value;
	pNew->next = NULL;

	if(!pHead)
		*pHead = pNew;
	else
	{
		struct ListNode *pNode = *pHead;
		while(pNode != NULL)
		{
			pNode = pNode->next;
		}
		pNode->next = pNew;
	}
	
}
/*
 * 删除链表中结点值为value的结点
 * */
void RemoveNode(struct ListNode **pHead, int value)
{
	if(pHead == NULL||*pHead == NULL)
	{
		printf("the list is null");
		return;
	}
	struct ListNode *ToBeDel = NULL;

	if((*pHead)->data == value)
	{
		ToBeDel = *pHead;
		*pHead = (*pHead)->next;
	}
	else
	{
		struct ListNode *pNode = *pHead;

		while(pNode->next != NULL && pNode->next->data != value)
			pNode = pNode->next;
		if(pNode->next != NULL && pNode->next->data == value)
		{
			ToBeDel = pNode->next;
			pNode->next = pNode->next->next;
		}
	}

	if(ToBeDel != NULL)
	{
		free(ToBeDel);
		ToBeDel = NULL;
	}
}
/*
 * 计算链表的长度
 * */
unsigned int GetListLength(struct ListNode *pHead)
{
	unsigned int length = 0;
	struct ListNode *pNode = pHead;

	while(pNode != NULL)
	{
		++length;
		pNode = pNode->next;
	}

	return length;
}
/*
 * 销毁一个结点
 * */
void DestroyNode(struct ListNode *pNode)
{
	free(pNode);
	pNode = NULL;
}
void DestroyList(struct ListNode* pHead)
{
	struct ListNode *pNode = pHead;
	while (pNode != NULL)
	{
		pHead = pHead->next;
		free(pNode);
		pNode = pHead;
	}
}
