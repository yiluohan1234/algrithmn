/*************************************************************************
	> File Name: ComplexList.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月06日 星期五 09时28分13秒
 ************************************************************************/

#include "ComplexList.h"

struct ComplexListNode* CreateNode(int value)
{
    struct ComplexListNode* pNode = (struct ComplexListNode *)malloc(sizeof(struct ComplexListNode));
    
    pNode->value = value;
    pNode->next = NULL;
    pNode->sibling = NULL;

    return pNode;
}

void BuildNodes(struct ComplexListNode* pNode, struct ComplexListNode* pNext, struct ComplexListNode* pSibling)
{
    if(pNode != NULL)
    {
        pNode->next = pNext;
        pNode->sibling = pSibling;
    }
}

void PrintList(struct ComplexListNode* pHead)
{
    struct ComplexListNode* pNode = pHead;
    while(pNode != NULL)
    {
        printf("The value of this node is: %d.\n", pNode->value);

        if(pNode->sibling != NULL)
            printf("The value of its sibling is: %d.\n", pNode->sibling->value);
        else
            printf("This node does not have a sibling.\n");

        printf("\n");

        pNode = pNode->next;
    }
}
void DestroyList(struct ComplexListNode *pNode)
{
	if (pNode != NULL)
	{
		struct ComplexListNode *pNext = pNode->next;
		//struct ComplexListNode *pSibling = pNode->sibling;

		free(pNode);
		//pRoot == NULL;
		DestroyList(pNext);
		//DestroyList(pSibling);
	}
}
