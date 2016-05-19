/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月19日 星期四 09时00分24秒
 ************************************************************************/
#include "reverseList.h"
#include "List.h"
struct ListNode* Test(struct ListNode* pHead)
{
    printf("\nThe original list is: \n");
    PrintList(pHead);

    struct ListNode* pReversedHead = reverseList(pHead);

    printf("\nThe reversed list is: \n");
    PrintList(pReversedHead);

    return pReversedHead;
}

// 输入的链表有多个结点
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

    struct ListNode* pReversedHead = Test(pNode1);

    DestroyList(pReversedHead);
}

// 输入的链表只有一个结点
void Test2()
{
    struct ListNode* pNode1 = CreateListNode(1);

    struct ListNode* pReversedHead = Test(pNode1);

    DestroyList(pReversedHead);
}

// 输入空链表
void Test3()
{
    Test(NULL);
}
int main()
{
	Test1();
	Test2();
	Test3();
	return 0;
}
