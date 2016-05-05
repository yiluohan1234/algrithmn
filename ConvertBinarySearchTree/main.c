/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月05日 星期四 16时58分31秒
 ************************************************************************/

#include "Convert.h"

void PrintDoubleLinkedList(struct BinaryTreeNode* pHeadOfList)
{
    struct BinaryTreeNode* pNode = pHeadOfList;

    printf("The nodes from left to right are:\n");
    while(pNode != NULL)
    {
        printf("%d\t", pNode->value);

        if(pNode->right == NULL)
            break;
        pNode = pNode->right;
    }

    printf("\nThe nodes from right to left are:\n");
    while(pNode != NULL)
    {
        printf("%d\t", pNode->value);

        if(pNode->left == NULL)
            break;
        pNode = pNode->left;
    }

    printf("\n");
}

void DestroyList(struct BinaryTreeNode* pHeadOfList)
{
    struct BinaryTreeNode* pNode = pHeadOfList;
    while(pNode != NULL)
    {
        struct BinaryTreeNode* pNext = pNode->right;

        free(pNode);
        pNode = pNext;
    }
}

void Test(char* testName, struct BinaryTreeNode* pRootOfTree)
{
    if(testName != NULL)
        printf("%s begins:\n", testName);

    PrintTree(pRootOfTree);

    struct BinaryTreeNode* pHeadOfList = convert(pRootOfTree);

    PrintDoubleLinkedList(pHeadOfList);
}
void Test1()
{
    struct BinaryTreeNode* pNode10 = CreateBinaryTreeNode(10);
    struct BinaryTreeNode* pNode6 = CreateBinaryTreeNode(6);
    struct BinaryTreeNode* pNode14 = CreateBinaryTreeNode(14);
    struct BinaryTreeNode* pNode4 = CreateBinaryTreeNode(4);
    struct BinaryTreeNode* pNode8 = CreateBinaryTreeNode(8);
    struct BinaryTreeNode* pNode12 = CreateBinaryTreeNode(12);
    struct BinaryTreeNode* pNode16 = CreateBinaryTreeNode(16);

    ConnectTreeNodes(pNode10, pNode6, pNode14);
    ConnectTreeNodes(pNode6, pNode4, pNode8);
    ConnectTreeNodes(pNode14, pNode12, pNode16);

    Test("Test1", pNode10);

    DestroyList(pNode4);
}
int main()
{
	Test1();
	return 0;
}
