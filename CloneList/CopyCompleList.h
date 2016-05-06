/*************************************************************************
	> File Name: CopyCompleList.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年05月06日 星期五 09时35分05秒
 ************************************************************************/

#ifndef _COPYCOMPLELIST_H
#define _COPYCOMPLELIST_H
#include "ComplexList.h"
#include <stdlib.h>
#include <stdio.h>
void CloneNodes(struct ComplexListNode *pHead);
void ConnectSiblingNodes(struct ComplexListNode *pHead);
struct ComplexListNode *ReconnectNodes(struct ComplexListNode *pHead);

struct ComplexListNode *Clone(struct ComplexListNode *pHead);

#endif
