/************************************************************************
	> File Name: List.h
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月23日 星期三 17时27分15秒
 ************************************************************************/

#ifndef ALGRITHMN_LIST_H
#define ALGRITHMN_LIST_H


struct ListNode
{
	int data;
	struct ListNode *next;
};
struct ListNode *CreateListNode(int value);
void ConnectListNodes(struct ListNode *pCurrent, struct ListNode *pNext);
void PrintListNode(struct ListNode *pNode);
void PrintList(struct ListNode *pHead);
void AddToTail(struct ListNode **pHead, int value);
void RemoveNode(struct ListNode **pHead,int value);
unsigned int GetListLength(struct ListNode *pHead);
void DestroyNode(struct ListNode *pNode);
void DestroyList(struct ListNode *pHead);

#endif
