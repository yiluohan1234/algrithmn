/*************************************************************************
	> File Name: TreeDepth.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月14日 星期四 20时55分04秒
 ************************************************************************/

#ifndef _TREEDEPTH_H
#define _TREEDEPTH_H
#include "BinaryTree.h"
#define FALSE 0
#define TRUE 1
int TreeDepth(struct BinaryTreeNode *pRoot);
int IsBalanced1(struct BinaryTreeNode *pRoot);
int IsBalanced2(struct BinaryTreeNode *pRoot, int *pDepth);

#endif
