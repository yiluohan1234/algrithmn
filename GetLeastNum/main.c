/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月25日 星期一 16时58分17秒
 ************************************************************************/

#include "GetLeastNum.h"
int main()
{
	int data[] = {4, 5, 1, 6, 2, 7, 3, 8};
	int outdata[10] = {0};
	GetLeastNum(data, 8, outdata, 4);
	int i = 0;
	for (i = 0; i < 4; i++)
		printf("%d ", outdata[i]);
	return 0;
}
