#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//void GetMemory(char** p)
//{
//	assert(p != NULL);
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//    char p[] = "hello world";
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//int main()
//{
//    Test();
//    return 0;
//}

//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}

void Test(void)
{
    char* str = (char*)malloc(100);
    strcpy(str, "hello");
    free(str);
    str = NULL;
    if (str != NULL)
    {
        strcpy(str, "world");
        printf(str);
    }
}
int main()
{
    Test();
    return 0;
}