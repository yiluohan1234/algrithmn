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
/*
 * 输入一颗二叉树的根节点，判断树是不是平衡二叉树，如果某个二叉树中任意结点的左右字数的深度相差不超过1，那么他就是一颗平衡二叉树
 * */
/*遍历每个结点，求它左右子树的深度*/
int IsBalanced1(struct BinaryTreeNode *pRoot)
{
	if (pRoot == NULL)
		return TRUE;
	int left = TreeDepth(pRoot->left);
	int right = TreeDepth(pRoot->right);
	int diff = left - right;
	if (diff > 1 || diff < -1)
		return TRUE;

	return IsBalanced1(pRoot->left) && IsBalanced1(pRoot->right);
}
/*用后序遍历方式遍历二叉树的每一个结点*/
int IsBalanced2(struct BinaryTreeNode *pRoot, int *pDepth)
{
	if (pRoot == NULL)
		return TRUE;
	int left = 0, right = 0;
	if (IsBalanced2(pRoot->left, &left) && IsBalanced2(pRoot->right, &right))
	{
		int diff = left - right;
		if (diff <= 1 && diff >= -1)
		{
			*pDepth = 1 + (left>right?left:right);
			return TRUE;
		}
	}
	return FALSE;
}
