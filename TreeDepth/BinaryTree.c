/*************************************************************************
	> File Name: Tree.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月14日 星期四 20时38分43秒
 ************************************************************************/

#include "BinaryTree.h"
struct BinaryTreeNode *CreateBinaryTreeNode(int value)
{
	struct BinaryTreeNode *pNode = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
	pNode->value = value;
	pNode->left = NULL;
	pNode->right = NULL;
	return pNode;
}

void ConnectTreeNodes(struct BinaryTreeNode *pRoot, struct BinaryTreeNode *pLeft, struct BinaryTreeNode *pRight)
{
	if (pRoot != NULL)
	{
		pRoot->left = pLeft;
		pRoot->right = pRight;
	}
}
void PrintTreeNode(struct BinaryTreeNode *pNode)
{
	if (pNode != NULL)
	{
		printf("the value of this node is :%d\n", pNode->value);
		if (pNode->left != NULL)
		{
			printf("the value of left child is %d\n",pNode->left->value);
		}
		else
		{
			printf("the left child is NULL\n");
		}
		if (pNode->right != NULL)
		{
			printf("the value of right child is %d\n",pNode->right->value);
		}
		else
		{
			printf("the right child is NULL\n");
		}
	}
	printf("\n");
}
void PrintTree(struct BinaryTreeNode *pRoot)
{
	PrintTreeNode(pRoot);
	if (pRoot != NULL)
	{
		if (pRoot->left != NULL)
			PrintTree(pRoot->left);
		if (pRoot->right != NULL)
			PrintTree(pRoot->right);
	}
}
void DestroyTree(struct BinaryTreeNode *pRoot)
{
	if (pRoot != NULL)
	{
		struct BinaryTreeNode *pLeft = pRoot->left;
		struct BinaryTreeNode *pRight = pRoot->right;

		free(pRoot);
		pRoot == NULL;
		DestroyTree(pLeft);
		DestroyTree(pRight);
	}
}
