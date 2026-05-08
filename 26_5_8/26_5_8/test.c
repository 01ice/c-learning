#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//    //// 如果下面输出负数，说明char默认为signed
//    ///*char c = 255;
//    //printf("%d\n", c);
//    //return 0;*/
//    //signed char s = 127;  // char最大值
//    //s = s + 1;  // 溢出！这是未定义行为
//    //// 理论上程序可能崩溃、输出任意值、或看似"正常"地变成-128
//    //printf("%d\n", s);
//
//    //unsigned char u = 255; // unsigned char最大值
//    //u = u + 1;  // 溢出，但行为定义明确
//    //printf("%u\n", u);  // 保证输出 0（环绕）
//
//  /*  while (1)
//    {
//        int i = 0;
//        scanf("%d", &i);
//        if (i)
//        {
//            printf("真\n");
//        }
//        else
//        {
//            printf("假\n");
//        }
//    }*/
//
////#include <stdbool.h>
////    _Bool a = true;
////    bool b = false;
////    if (a)
////        printf("真\n");
//
//    //short a = 2;
//    //int b = 10;
//    //printf("%zu\n", sizeof(a = a + b));//最后赋给a,a的类型是short,所以输出2
//    //printf("%d\n", a);//不会影响a,a等于2
//    return 0;
//}
// Linux x86_64 输出 -1（有符号）
// ARM 某些环境输出 255（无符号）


//int a = 10;
//int main()
//{
//	int a = 5;
//	printf("%d\n", a);
//	return 0;
//}

//int a = 100;
//extern int a;//声明外部符号
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	//printf("%d\n", -11 % 10);//-1
	//printf("%d\n", 11 % -10);//1
	/*int b = 5;
	int c = 2;
	c = b = a + 1;
	a = a + 5;
	a += 5;
	a += 1;
	a++;
	++a;*/
	/*int a = 10;
	(double)a;
	printf("%f\n", a);*/
	/*printf("%d\n", b);
	printf("%d\n", c);*/

	//printf((const char*)100);
	//char* p = "hello";
	//p[0] = 'H';  // 编译通过，但运行时会崩溃（段错误）或行为未定义
	/*printf("%zu\n", sizeof("hello"));
	size_t a = printf("%s\n", "hello");
	printf("%zu\n", a);*/
	//char arr[] = "hello";   // arr 的类型是 char[6]
	//char* ptr = "hello";    // ptr 的类型是 char*
	//
	//printf("%zu\n", sizeof(arr));   // 输出 6 (数组大小)
	//printf("%zu\n", sizeof(ptr));   // 输出 8 (指针大小)
	//printf("%s\n", "hello");
	//printf("%c\n", 'b' - 'a');

	printf("%d\n", printf("hello\n"));
	return 0;
}