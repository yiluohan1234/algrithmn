/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月24日 星期四 09时41分09秒
 ************************************************************************/

#include "GetNumOfKey.h"
/*
 * 统计一个数字在排序数组中出现的次数
 *	从数组开头开始对数组进行遍历，时间复杂度为O(n);
 *	利用二分查找找到数组中要查找的数字的第一次出现的位置和最后一次出现的位置。
 *	*/
int main()
{
	int Test[NUMSIZE] = {
		1,2,3,3,3,3,4,5
	};
	int FindKey = 3;

	int result = GetNumOfKey(Test, NUMSIZE, FindKey);

	printf("the number of %d is %d\n", FindKey, result);

	return 0;
}
