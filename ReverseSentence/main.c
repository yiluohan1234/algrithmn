/*************************************************************************
	> File Name: main.c
	> Author: cyf
	> Mail: 1097189275@qq.com 
	> Created Time: 2016年03月25日 星期五 17时17分21秒
 ************************************************************************/

#include "reverse.h"



int main()
{
/*
 * 输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变，为简单起见，标点符号和普通字母一样处理
 * 例如："I am a student."->"student a am I"
 * */
	char pStr[] = "I am a Student.";
	
	printf("反转前:%s\n",pStr);

	int ret = ReverseSentence(pStr);
	if (ret == -1)
	{
		printf("func ReverseSentence(), err %d\n", ret);
	}

	printf("反转后:%s\n",pStr);
/*
 * 字符串中的左旋转操作是吧字符串前面的若干个字符转移到字符串的尾部，请定义一个函数实现字符串左旋转操作的功能
 * 例如："abcdefg":2->"cdefgab"
 * */
	char p[] = "abcdefghi";
	printf("反转前:%s\n",p);
	char *pr = LeftRotateString(p, 2);
	printf("反转后:%s\n",pr);
	return 0;
}

