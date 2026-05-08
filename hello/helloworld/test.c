#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void test01()//有\0和无\0的区别
{
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
}

int main()
{
	printf("hello world!\n");
	//test01();
	//getchar();
	return 0;
}