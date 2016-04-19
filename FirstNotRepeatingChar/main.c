/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: XXX@qq.com
	> Created Time: 2016年04月19日 星期二 16时10分01秒
 ************************************************************************/

#include "FirstNotRepeatingChar.h"

void Test(char *testname, char *string, char expected)
{
	if (FirstNotRepeatingChar(string) == expected)
	{
		printf("test %s pass!\n", testname);
	}
	else
	{
		printf("test %s fail!\n", testname);
	}

}
void Test1()
{
	char string[] = "abaccdeff";
	Test("Test1", string, 'b');
}

int main()
{
	Test1();

	return 0;

}
