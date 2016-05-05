/*************************************************************************
	> File Name: Convert.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月05日 星期四 16时40分37秒
 ************************************************************************/

#include "Convert.h"

struct BinaryTreeNode* convert(struct BinaryTreeNode *pRoot)
{
	struct BinaryTreeNode *pLastNodeInList = NULL;
	convertTree(pRoot, &pLastNodeInList);
	struct BinaryTreeNode *pHeadList = pLastNodeInList;
	while (pHeadList != NULL && pHeadList->left != NULL)
		pHeadList = pHeadList->left;

	return pHeadList;
}

void convertTree(struct BinaryTreeNode *pRoot, struct BinaryTreeNode **pLastNodeInList)
{
	if (pRoot == NULL)
		return ;
	struct BinaryTreeNode *pCurrent = pRoot;

	if (pCurrent->left != NULL)
		convertTree(pCurrent->left, pLastNodeInList);
	pCurrent->left = *pLastNodeInList;
	if (*pLastNodeInList != NULL)
		(*pLastNodeInList)->right = pCurrent;
	*pLastNodeInList = pCurrent;
	if (pCurrent->right != NULL)
		convertTree(pCurrent->right, pLastNodeInList);
}
