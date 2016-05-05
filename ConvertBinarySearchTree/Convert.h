/*************************************************************************
	> File Name: Convert.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月05日 星期四 16时38分25秒
 ************************************************************************/

#ifndef _CONVERT_H
#define _CONVERT_H
#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"
struct BinaryTreeNode* convert(struct BinaryTreeNode *pRoot);
void convertTree(struct BinaryTreeNode *pRoot, struct BinaryTreeNode **pLastNodeInList);


#endif
