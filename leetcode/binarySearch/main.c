/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月25日 星期一 16时58分17秒
 ************************************************************************/

#include "binarySearch.h"
int main()
{
	int data[] = {1, 4, 7, 11, 23, 45, 56, 88};
	int ret = binarySearch(data, 8, 11);
	printf("二分查找原始算法:%d\n", ret);

	int x;
	printf("请输入一个整数:");
	scanf("%d",&x);
	int ret_sqrt = mySqrt(x);
	printf("%d的平方根为:%d\n",x, ret_sqrt);
	char letters[] = {'c', 'f', 'j'};
    char ret_letter = nextGreatestLetter(letters, 3, 'k');
	printf("大于给定最小字符:%c\n", ret_letter);
	int noneDuplicate[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
	int ret_none_duplicat = singleNonDuplicate(noneDuplicate, 9);
	printf("没有重复的数字是:%d\n", ret_none_duplicat);
	return 0;
}
