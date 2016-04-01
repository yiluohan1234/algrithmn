/*************************************************************************
	> File Name: GetNumOfKey.h
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月24日 星期四 09时22分49秒
 ************************************************************************/

#ifndef GETNUMOFKEY_H
#define GETNUMOFKEY_H


#include <stdio.h>
#include <stdlib.h>
#define NUMSIZE 8
int GetFirstKey(int *data, int length, int k, int start, int end);
int GetLastKey(int *data,int length, int k, int start, int end);
int GetNumOfKey(int *data, int length, int k);




#endif
