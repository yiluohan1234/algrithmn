/*************************************************************************
	> File Name: Tree.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月14日 星期四 20时34分23秒
 ************************************************************************/

#ifndef _TREE_H
#define _TREE_H
#include <stdio.h>
#include <stdlib.h>
struct BinaryTreeNode
{
	int value;
	struct BinaryTreeNode *left;
	struct BinaryTreeNode *right;
};
struct BinaryTreeNode *CreateBinaryTreeNode(int value);
void ConnectTreeNodes(struct BinaryTreeNode *pRoot, struct BinaryTreeNode *pLeft, struct BinaryTreeNode *pRight);
void PrintTreeNode(struct BinaryTreeNode *pNode);
void PrintTree(struct BinaryTreeNode *pRoot);
void DestroyTree(struct BinaryTreeNode *pRoot);

#endif
