/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月18日 星期三 14时01分15秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mergeList.h"
#include "List.h"
struct ListNode* Test(char* testName, struct ListNode* pHead1, struct ListNode* pHead2)
{
    if(testName != NULL)
        printf("%s begins:\n", testName);

    printf("The first list is:\n");
    PrintList(pHead1);

    printf("\nThe second list is:\n");
    PrintList(pHead2);

    printf("\nThe merged list is:\n");
    struct ListNode* pMergedHead = mergeList(pHead1, pHead2);
    PrintList(pMergedHead);
    
    printf("\n\n");

    return pMergedHead;
}

// list1: 1->3->5
// list2: 2->4->6
void Test1()
{
    struct ListNode* pNode1 = CreateListNode(1);
    struct ListNode* pNode3 = CreateListNode(3);
    struct ListNode* pNode5 = CreateListNode(5);

    ConnectListNodes(pNode1, pNode3);
    ConnectListNodes(pNode3, pNode5);

    struct ListNode* pNode2 = CreateListNode(2);
    struct ListNode* pNode4 = CreateListNode(4);
    struct ListNode* pNode6 = CreateListNode(6);

    ConnectListNodes(pNode2, pNode4);
    ConnectListNodes(pNode4, pNode6);

    struct ListNode* pMergedHead = Test("Test1", pNode1, pNode2);

    DestroyList(pMergedHead);
}
int main()
{
	Test1();
	return 0;
}
