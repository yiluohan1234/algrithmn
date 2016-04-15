/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月14日 星期四 21时04分09秒
 ************************************************************************/

#include "TreeDepth.h"
#include "BinaryTree.h"
void Test(struct BinaryTreeNode *pRoot, int expected)
{
	int result = TreeDepth(pRoot);
	if (result == expected)
		printf("test pass!\n");
	else
		printf("test fail!\n");
}
void Test1()
{
	printf("begin:\n");
	struct BinaryTreeNode *pNode1 = CreateBinaryTreeNode(1);
	struct BinaryTreeNode *pNode2 = CreateBinaryTreeNode(2);
	struct BinaryTreeNode *pNode3 = CreateBinaryTreeNode(3);
	struct BinaryTreeNode *pNode4 = CreateBinaryTreeNode(4);
	struct BinaryTreeNode *pNode5 = CreateBinaryTreeNode(5);
	struct BinaryTreeNode *pNode6 = CreateBinaryTreeNode(6);
	struct BinaryTreeNode *pNode7 = CreateBinaryTreeNode(7);

	ConnectTreeNodes(pNode1, pNode2, pNode3);
	ConnectTreeNodes(pNode2, pNode4, pNode5);
	ConnectTreeNodes(pNode3, NULL, pNode6);
	ConnectTreeNodes(pNode5, pNode7, NULL);

	Test(pNode1, 4);
	if (IsBalanced1(pNode1))
	{
		printf("this is a balanced tree.\n");

	}
	else
	{
		printf("this is not a balanced tree.\n");
	}
	DestroyTree(pNode1);
	printf("end!\n");
}
int main()
{
	Test1();
	return 0;
}
