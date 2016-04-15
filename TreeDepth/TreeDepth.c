/*************************************************************************
	> File Name: TreeDepth.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月14日 星期四 20时58分54秒
 ************************************************************************/
#include "BinaryTree.h"
#include "TreeDepth.h"
/*
 * 输入一颗二叉树的根节点，求该树的深度，从根节点到叶节点依次经过的结点形成一条路径，最长路径的长度为树的深度
 * */
int TreeDepth(struct BinaryTreeNode *pRoot)
{
	if ( pRoot == NULL )
		return 0;
	int numLeft = TreeDepth(pRoot->left);
	int numRight = TreeDepth(pRoot->right);

	return (numLeft > numRight)?(numLeft + 1):(numRight + 1);
}
