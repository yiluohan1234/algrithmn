/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月20日 星期五 09时57分05秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deleteNode.h"
void Test(struct ListNode* pListHead, struct ListNode* pNode)
{
    printf("\nThe original list is: \n");
    PrintList(pListHead);

    printf("\nThe node to be deleted is: \n");
    PrintListNode(pNode);

    deleteNode(&pListHead, pNode);
    
    printf("\nThe result list is: \n");
    PrintList(pListHead);
}

// 链表中有多个结点，删除中间的结点
void Test1()
{
    struct ListNode* pNode1 = CreateListNode(1);
    struct ListNode* pNode2 = CreateListNode(2);
    struct ListNode* pNode3 = CreateListNode(3);
    struct ListNode* pNode4 = CreateListNode(4);
    struct ListNode* pNode5 = CreateListNode(5);

    ConnectListNodes(pNode1, pNode2);
    ConnectListNodes(pNode2, pNode3);
    ConnectListNodes(pNode3, pNode4);
    ConnectListNodes(pNode4, pNode5);

    Test(pNode1, pNode3);

    DestroyList(pNode1);
}
// 链表中有多个结点，删除尾结点
void Test2()
{
    struct ListNode* pNode1 = CreateListNode(1);
    struct ListNode* pNode2 = CreateListNode(2);
    struct ListNode* pNode3 = CreateListNode(3);
    struct ListNode* pNode4 = CreateListNode(4);
    struct ListNode* pNode5 = CreateListNode(5);

    ConnectListNodes(pNode1, pNode2);
    ConnectListNodes(pNode2, pNode3);
    ConnectListNodes(pNode3, pNode4);
    ConnectListNodes(pNode4, pNode5);

    Test(pNode1, pNode5);

    DestroyList(pNode1);
}

// 链表中有多个结点，删除头结点
void Test3()
{
    struct ListNode* pNode1 = CreateListNode(1);
    struct ListNode* pNode2 = CreateListNode(2);
    struct ListNode* pNode3 = CreateListNode(3);
    struct ListNode* pNode4 = CreateListNode(4);
    struct ListNode* pNode5 = CreateListNode(5);

    ConnectListNodes(pNode1, pNode2);
    ConnectListNodes(pNode2, pNode3);
    ConnectListNodes(pNode3, pNode4);
    ConnectListNodes(pNode4, pNode5);

    Test(pNode1, pNode1);

    DestroyList(pNode1);
}

// 链表中只有一个结点，删除头结点
void Test4()
{
    struct ListNode* pNode1 = CreateListNode(1);

    Test(pNode1, pNode1);
}

// 链表为空
void Test5()
{
    Test(NULL, NULL);
}

int main()
{
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	return 0;
}
