/*************************************************************************
	> File Name: hasSubTree.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月18日 星期三 13时21分34秒
 ************************************************************************/

#include "hasSubTree.h"

int doHasTree(struct BinaryTreeNode *pRoot1, struct BinaryTreeNode *pRoot2)
{
	int ret = 0;
	if (pRoot2==NULL)
	{
		ret = 1;
		return ret;
	}
	if (pRoot1 == NULL)
	{
		return ret;
	}
	if (pRoot1->value != pRoot2->value)
	{
		return ret;
	}
	return doHasTree(pRoot1->left, pRoot2->left)&&doHasTree(pRoot1->right, pRoot2->right);
}
int hasSubTree(struct BinaryTreeNode *pRoot1, struct BinaryTreeNode * pRoot2)
{
	int ret = 0;
	if (pRoot1 != NULL && pRoot2 != NULL)
	{
		if (pRoot1->value == pRoot2->value)
			ret = doHasTree(pRoot1, pRoot2);
		if (!ret)
		{
			ret = hasSubTree(pRoot1->left, pRoot2);
		}
		if (!ret)
		{
			ret = hasSubTree(pRoot1->right, pRoot2);
		}
	}
	return ret;
}
