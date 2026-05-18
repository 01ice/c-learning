#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	int arr1[] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}


//int main() {
//    int n, m;
//    while (scanf("%d %d", &n, &m) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        int arr1[n][m];
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                scanf("%d ", &arr1[i][j]);
//            }
//        }
//        for (int j = 0; j < m; j++)
//        {
//            for (int i = 0; i < n; i++)
//            {
//                printf("%d ", arr1[i][j]);
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[n];
//	int arr2[m];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr1[i]);
//	}
//	for (int j = 0; j < m; j++)
//	{
//		scanf("%d ", &arr2[j]);
//	}
//	int i = 0;
//	int j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] <= arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	while (i < n)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	while (j < m)
//	{
//		printf("%d ", arr2[j]);
//		j++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sum = 0;
//	float avg = 0.0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//		avg = sum / 10.0;
//	}
//	printf("%.1f\n", avg);
//	return 0;
//}

//void swap(int* x,int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	for (int i = 0; i < 5; i++)
//	{
//		swap(&arr1[i], &arr2[i]);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n", -1 >> 1);
//	return 0;
//}
//方法1
//int main()
//{
//    int num = 10;
//    int count = 0;//计数
//
//    while (num)
//    {
//        if (num % 2 == 1)
//            count++;
//        num = num / 2;
//    }
//    printf("二进制中1的个数= %d\n", count);
//    return 0;
//}
//
////方法2
//int main()
//{
//    int num = -1;
//    int i = 0;
//    int count = 0;//计数
//
//    for (i = 0; i < 32; i++)
//    {
//        if (num & (1 << i))
//            count++;
//    }
//    printf("⼆进制中1的个数= % d\n", count);
//    return 0;
//}

//方法3
//int main()
//{
//    int num = -1;
//    int count = 0;//计数
//
//    while (num)
//    {
//        count++;
//        num = num & (num - 1);
//        //11111111111111111111111111111111  &
//        //11111111111111111111111111111110
//        //= 11111111111111111111111111111110相当于左移一位
//    }
//    printf("二进制中1的个数= % d\n", count);
//    return 0;
//}

//13的2进制序列：00000000000000000000000000001101
//将第5位置为1后：00000000000000000000000000011101
//将第5位再置为0：00000000000000000000000000001101

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//	a = a & ~(1 << 4);
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p = { 1,2 };
//int main()
//{
//	printf("x: %d y: %d\n", p.x, p.y);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	struct Point p = { 3, 4 };
//	struct Point* ptr = &p;
//	ptr->x = 10;
//	ptr->y = 20;
//	printf("x = %d y = %d\n", ptr->x, ptr->y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	printf("%d\n", *pa);//0
//	printf("%p\n", &a);
//	printf("%p\n", pa);//输出地址相同
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return  0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	while (p < arr + sz) //指针的⼤⼩⽐较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* const pa = &a;//pa的指向不能修改
//	pa = &b;
//	printf("%d\n", a);//通过解引用可以改变a的值
//	return 0;
//}

//#include <assert.h>
//
//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//void test(int* p)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = % d b = % d\n", a, b);
//	Swap1(a, b);
//	printf("交换后：a = % d b = % d\n", a, b);
//
//	printf("交换前：a = % d b = % d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后：a = % d b = % d\n", a, b);
//
//	int arr[] = { 1,2,3,4 };
//	test(arr);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr     = % p\n", arr);
//	printf("&arr    = % p\n", &arr);
//	printf("&arr+1  = % p\n", &arr+1);
//	return 0;
//}


//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //输⼊
//
//    int* p = arr;
//    for (i = 0; i < sz; i++)
//    {
//        scanf("%d", p + i);
//        //scanf("%d", arr+i);//也可以这样写
//
//    }
//    //输出
//
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//	return 0;
//}


//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//	test(arr);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	//数组名是数组⾸元素的地址，类型是int*的，就可以存放在parr数组中
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pa = &p;
//	printf("%d\n", **pa);
//	return 0;
//}

//int main()
//{
//	const char* pstr = "hello bit.";//这⾥是把⼀个字符串放到pstr指针变量⾥了吗？
//	printf("%s\n", pstr);
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int (*pa)[5] = &arr;
//	return 0;
//}

//void test(int a[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//void test(int (*p)[5], int r, int c)
//{
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//int* test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("test():  %p\n", test());
//	printf("test:  %p\n", test);
//	printf("&test: %p\n", &test);
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//void (*pf1)() = &test;
//void (*pf2)() = test;
//int Add(int x, int y)
//{
//	return x + y;
//}
//int(*pf3)(int, int) = Add;
//int(*pf3)(int x, int y) = &Add;//x和y写上或者省略都是可以的

//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//
//    do
//    {
//        printf("*************************\n");
//        printf("  1:add           2:sub  \n");
//        printf("  3:mul           4:div  \n");
//        printf("  0:exit                 \n");
//        printf("*************************\n");
//        printf("请选择：");
//        scanf("%d", &input);
//        if ((input <= 4 && input >= 1))
//        {
//            printf("输入操作数：");
//            scanf("%d %d", &x, &y);
//            ret = (*p[input])(x, y);
//            printf("ret = %d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出计算器\n");
//        }
//        else
//        {
//            printf("输入有误\n");
//        }
//    } while (input);
//    return 0;
//}