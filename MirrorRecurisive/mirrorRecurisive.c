/*************************************************************************
	> File Name: mirrorRecurisive.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月13日 星期五 09时01分30秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "BinaryTree.h"

void mirrorRecurisive(struct BinaryTreeNode *pNode)
{
	if (pNode == NULL || pNode->left == NULL || pNode->right)
	{
		return ;
	}
	struct BinaryTreeNode *tmp = pNode->left;
	pNode->left = pNode->right;
	pNode->right = tmp;

	if (pNode->left)
	{
		mirrorRecurisive(pNode->left);
	}

	if (pNode->right)
	{
		mirrorRecurisive(pNode->right);
	}
}
/*
void MirrorIteratively(BinaryTreeNode* pRoot)
{
    if(pRoot == NULL)
        return;

    std::stack<BinaryTreeNode*> stackTreeNode;
    stackTreeNode.push(pRoot);

    while(stackTreeNode.size() > 0)
    {
        BinaryTreeNode *pNode = stackTreeNode.top();
        stackTreeNode.pop();

        BinaryTreeNode *pTemp = pNode->m_pLeft;
        pNode->m_pLeft = pNode->m_pRight;
        pNode->m_pRight = pTemp;

        if(pNode->m_pLeft)
            stackTreeNode.push(pNode->m_pLeft);

        if(pNode->m_pRight)
            stackTreeNode.push(pNode->m_pRight);
    }
}
*/
