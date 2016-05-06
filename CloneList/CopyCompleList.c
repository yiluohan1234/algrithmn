/*************************************************************************
	> File Name: CopyCompleList.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月06日 星期五 09时38分29秒
 ************************************************************************/

#include "CopyCompleList.h"

void CloneNodes(struct ComplexListNode *pHead)
{
	struct ComplexListNode *pNode = pHead;
	while(pNode != NULL)
	{
		struct ComplexListNode *pCloned = (struct ComplexListNode* )malloc(sizeof(struct ComplexListNode));
		pCloned->value = pNode->value;
		pCloned->next = pNode->next;
		pCloned->sibling = NULL;
		pNode->next = pCloned;
		pNode = pCloned->next;
	}
}
void ConnectSiblingNodes(struct ComplexListNode *pHead)
{
	struct ComplexListNode *pNode = pHead;
	while(pHead != NULL)
	{
		struct ComplexListNode *pCloned = pNode->next;
		if (pNode->sibling != NULL)
			pCloned->sibling = pNode->sibling->next;
		pNode = pCloned->next;
	}
}
struct ComplexListNode *ReconnectNodes(struct ComplexListNode *pHead)
{
	struct ComplexListNode *pNode = pHead;
	struct ComplexListNode *pClonedHead = NULL;
	struct ComplexListNode *pClonedNode = NULL;
	if (pNode != NULL)
	{
		pClonedHead = pClonedNode = pNode->next;
		pNode->next = pClonedNode->next;
		pNode = pNode->next;
	}
	while(pNode != NULL)
	{
		pClonedNode->next = pNode->next;
		pClonedNode = pClonedNode->next;
		pNode->next = pClonedNode->next;
		pNode = pNode->next;
	}
	return pClonedHead;
}
struct ComplexListNode *Clone(struct ComplexListNode* pHead)
{
    CloneNodes(pHead);
    ConnectSiblingNodes(pHead);
    return ReconnectNodes(pHead);
}

