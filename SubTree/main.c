/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月18日 星期三 13时30分35秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hasSubTree.h"
void Test(char *testName, struct BinaryTreeNode* pRoot1, struct BinaryTreeNode* pRoot2, int expected)
{
    if(hasSubTree(pRoot1, pRoot2) == expected)
        printf("%s passed.\n", testName);
    else
        printf("%s failed.\n", testName);
}

// 树中结点含有分叉，树B是树A的子结构
//                  8                8
//              /       \           / \
//             8         7         9   2
//           /   \
//          9     2
//               / \
//              4   7
void Test1()
{
    struct BinaryTreeNode* pNodeA1 = CreateBinaryTreeNode(8);
    struct BinaryTreeNode* pNodeA2 = CreateBinaryTreeNode(8);
    struct BinaryTreeNode* pNodeA3 = CreateBinaryTreeNode(7);
    struct BinaryTreeNode* pNodeA4 = CreateBinaryTreeNode(9);
    struct BinaryTreeNode* pNodeA5 = CreateBinaryTreeNode(2);
    struct BinaryTreeNode* pNodeA6 = CreateBinaryTreeNode(4);
    struct BinaryTreeNode* pNodeA7 = CreateBinaryTreeNode(7);

    ConnectTreeNodes(pNodeA1, pNodeA2, pNodeA3);
    ConnectTreeNodes(pNodeA2, pNodeA4, pNodeA5);
    ConnectTreeNodes(pNodeA5, pNodeA6, pNodeA7);

    struct BinaryTreeNode* pNodeB1 = CreateBinaryTreeNode(8);
    struct BinaryTreeNode* pNodeB2 = CreateBinaryTreeNode(9);
    struct BinaryTreeNode* pNodeB3 = CreateBinaryTreeNode(2);

    ConnectTreeNodes(pNodeB1, pNodeB2, pNodeB3);

    Test("test1", pNodeA1, pNodeB1, 1);

    DestroyTree(pNodeA1);
    DestroyTree(pNodeB1);
}
int main()
{
	Test1();
	return 0;
}
