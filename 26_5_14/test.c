#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	
//
//	//完全初始化
//	//int arr1[5] = { 1 };//不完全初始化，第一个元素是1其余的都是0
//	//类型是int [12]
//	//char arr3[10];//类型是char [10]
//	
//	//	0,1,2,3,4
//	//printf("%d\n", arr1[2]);//3
//	//printf("%d\n", arr1[3]);//4
//	/*int arr1[5] = { 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	char ch[] = "hello";
//	printf("%s\n", ch);
//	int arr2[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}*/
//
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%zd\n", sizeof(arr));//40
//	//int arr[10] = { 0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n", sz);//10
//	/*int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}*/
//
//	/*int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//#include <windows.h> 
//#include <string.h>
//	
//	return 0;
//}
#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "Hello   world ...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen是求\0之前的个数
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);//让他的速度变慢
//		system("cls");//执行清屏命令
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int flag = 1;
//	int key = 7;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > key)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            flag = 1;
//            break;
//        }
//    }
//
//    if (1 == flag)
//        printf("找到了,下标是% d\n", mid);
//    else
//        printf("找不到\n");
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}

//void set_arr(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}

int test(int arr[])
{
	return arr;
}

int* test1(int arr[])
{
	return arr;
}

/*int arr1[] = { 0 };
	printf("%d\n", test(arr1));
	printf("%p\n", test1(arr1));*/

//void test3(int* p)
//{
//	printf("%p\n", p);
//	//*(p + 2)完全等价p[2]
//	printf("%d\n", *(p + 2));
//	printf("%d\n", p[2]);
//}
//
//int main()
//{
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	test3(arr2);
//	printf("%p\n", arr2);
//	return 0;
//}

//void swap1(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//void swap2(int* x, int* y)
//{
//	int tmp = NULL;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	swap1(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	printf("a的地址= %p b的地址= %p\n", &a, &b);
//	swap2(&a, &b);
//	printf("a的地址= %p b的地址= %p\n", &a, &b);
//
//	return 0;
//}



int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", add(a, b));
	return 0;
}

int add(int x, int y)
{
	return x + y;
}