/*************************************************************************
	> File Name: binarySearch.h
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: Mon 05 Nov 2018 11:38:27 AM CST
************************************************************************/

#ifndef _BINARYSEARCH_H
#define _BINARYSEARCH_H

#include <stdio.h>
#include <stdlib.h>
#define ARRAY_LEN(x) (sizeof(x)/sizeof((x)[0]))

int binarySearch(int *data, int length, int key);
int mySqrt(int x);
char nextGreatestLetter(char *data, int length , char target);
int singleNonDuplicate(int *data, int length);
int firstBadVersion(int n);
int isBadVersion(int n);
int findMin(int *data, int length);
#endif
