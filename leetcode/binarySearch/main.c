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

	int x = 6;
	int ret_sqrt = mySqrt(x);
	printf("%d的平方根为:%d\n",x, ret_sqrt);
	return 0;
}
