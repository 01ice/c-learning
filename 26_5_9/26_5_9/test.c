#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//printf("%s是占位置的\n", "占位符");
//	printf("%05d\n", 123);//00123，右对齐用0填充，%5d就是空格填充
//	printf("%-5d\n", 123);//123右边两个空格，左对齐
//	printf("%.2f\n", 12.345);//保留小数点后两位（四舍五入）
//	printf("%5d\n", 123456);
//	printf("%.3s\n", "hello");//hel
//	printf("%+d\n", 123);//+123带上+号
//	
//
//	return 0;
//}

int main()
{
	/*int a = 0;
	scanf("%d", &a);
	printf("%d\n", a);*/
	/*char arr[5];
	scanf("%4s", arr);
	printf("%s\n", arr);*/
	//printf("%d\n", printf((const char*)100));
	//printf("%d\n", printf("%d\n",100));
	/*int a, b, c;
	int d = scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", d);*/
	//成功读取3个返回3

	/*int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d%*c%d%*c%d", &year, &month, &day);
	printf("%d %d %d\n", year, month, day);*/

	char a = '我';//存储不了
	printf("%c\n", a);
	return 0;
}