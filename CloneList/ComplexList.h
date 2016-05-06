/*************************************************************************
	> File Name: ComplexList.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月06日 星期五 09时25分05秒
 ************************************************************************/

#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H
#include <stdlib.h>
#include <stdio.h>
struct ComplexListNode
{
    int                 value;
    struct ComplexListNode*    next;
    struct ComplexListNode*    sibling;
};

struct ComplexListNode* CreateNode(int value);
void BuildNodes(struct ComplexListNode* pNode, struct ComplexListNode* pNext, struct ComplexListNode* pSibling);
void PrintList(struct ComplexListNode* pHead);

void DestroyList(struct ComplexListNode *pNode);
#endif
