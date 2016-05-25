/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月19日 星期四 09时00分24秒
 ************************************************************************/
#include "PrintListReverse.h"
#include <stdio.h>
#include <stdlib.h>
#include "List.h"
void Test(struct ListNode* pHead)
{
    printf("\nThe original list is: \n");
    PrintList(pHead);

    printf("\nThe reversed print list is: \n");
    PrintListReverse(pHead);


    //PrintList(pHead);

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

    Test(pNode1);

    DestroyList(pNode1);
}


int main()
{
	Test1();
	return 0;
}
