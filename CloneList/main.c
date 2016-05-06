/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月06日 星期五 09时59分39秒
 ************************************************************************/

#include "CopyCompleList.h"
#include "ComplexList.h"
void Test(char* testName, struct ComplexListNode* pHead)
{
    if(testName != NULL)
        printf("%s begins:\n", testName);

    printf("The original list is:\n");
    PrintList(pHead);

    struct ComplexListNode* pClonedHead = Clone(pHead);

    printf("The cloned list is:\n");
    PrintList(pClonedHead);
}

//          -----------------
//         \|/              |
//  1-------2-------3-------4-------5
//  |       |      /|\             /|\
//  --------+--------               |
//          -------------------------
void Test1()
{
    struct ComplexListNode* pNode1 = CreateNode(1);
    struct ComplexListNode* pNode2 = CreateNode(2);
    struct ComplexListNode* pNode3 = CreateNode(3);
    struct ComplexListNode* pNode4 = CreateNode(4);
    struct ComplexListNode* pNode5 = CreateNode(5);

    BuildNodes(pNode1, pNode2, pNode3);
    BuildNodes(pNode2, pNode3, pNode5);
    BuildNodes(pNode3, pNode4, NULL);
    BuildNodes(pNode4, pNode5, pNode2);

    Test("Test1", pNode1);
	DestroyList(pNode1);
}
int main()
{
	Test1();
	return 0;
}
