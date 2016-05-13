/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月13日 星期五 09时06分03秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "mirrorRecurisive.h"
#include "BinaryTree.h"
void Test1()
{
    printf("=====Test1 starts:=====\n");
    struct BinaryTreeNode* pNode8 = CreateBinaryTreeNode(8);
    struct BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
    struct BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
    struct BinaryTreeNode* pNode5 = CreateBinaryTreeNode(5);
    struct BinaryTreeNode* pNode7 = CreateBinaryTreeNode(7);
    struct BinaryTreeNode* pNode9 = CreateBinaryTreeNode(9);
    struct BinaryTreeNode* pNode11 = CreateBinaryTreeNode(11);

    ConnectTreeNodes(pNode8, pNode6, pNode10);
    ConnectTreeNodes(pNode6, pNode5, pNode7);
    ConnectTreeNodes(pNode10, pNode9, pNode11);

    PrintTree(pNode8);

    printf("=====Test1: MirrorRecursively=====\n");
    mirrorRecurisive(pNode8);
    PrintTree(pNode8);


    DestroyTree(pNode8);
}
int main()
{
	Test1();
	return 0;
}
