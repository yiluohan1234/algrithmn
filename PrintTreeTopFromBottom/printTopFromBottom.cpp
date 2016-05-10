/*************************************************************************
	> File Name: printTopFromBottom.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月10日 星期二 08时34分42秒
 ************************************************************************/

#include "printTopFromBottom.h"

/*
 * 从上往下打印出二叉树的每个结点，同一层的结点按照从左到右的顺序打印
 * */
void printTopFromBottom(BinaryTreeNode *pRoot)
{
	if (pRoot == NULL)
		return;
	std::deque<BinaryTreeNode* > dequeTreeNode;
	dequeTreeNode.push_back(pRoot);
	while (dequeTreeNode.size())
	{
		BinaryTreeNode *pNode = dequeTreeNode.front();
		dequeTreeNode.pop_front();
		printf("%d", pNode->value);
		if (pRoot->left)
			dequeTreeNode.push_back(pNode->left);
		if (pRoot->right)
			dequeTreeNode->push_back(pNode->right);
	}
	
}
