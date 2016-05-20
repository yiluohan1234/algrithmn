/*************************************************************************
	> File Name: deleteNode.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月20日 星期五 09时44分14秒
 ************************************************************************/

#ifndef _DELETENODE_H
#define _DELETENODE_H

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

/*
 * 给定单链表的头指针和一个结点指针，定义一个函数在O(1)时间删除该节点
 * */
void deleteNode(struct ListNode **pListHead, struct ListNode *pToBeDeleted);


#endif
