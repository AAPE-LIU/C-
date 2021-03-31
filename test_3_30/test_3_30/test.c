# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/******************************************memset函数*************************/
//void * memset(void * ptr<要设置的数组>, int value<要设置成什么>, size_t num<设置前多少个字符>  );
//int main()
//{
//	char arr[] = "hello big baby";
//	memset(arr,'#',7);
//	printf("%s\n",arr);
//	return 0;
//}
/************************************求较大值的函数********************/
//int is_max(int x,int y)
//{
//	int max = (x > y) ? x : y;
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max = is_max(a,b);
//	printf("%d\n",max);
//	return 0;
//}

/***********************************函数实现二分查找*********************/
//int search(int arr[], int high, int low,int key)
//{
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (arr[mid] > key)
//		{
//			high = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			low = mid + 1;
//		}
//		else return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 8, 13, 16, 18, 26, 30, 33 ,35};
//	int high = sizeof(arr)/sizeof(arr[0]);
//	int low = 0;
//	int key = 0;
//	scanf("%d",&key);
//	int ret = search(arr,high,low,key);
//	if (ret != -1)
//		printf("所查找的数字下标是%d\n",ret); 
//	else printf("所查找的数字不在数组中");
//	return 0;
//}


/*************************************************函数的链式运算*************************/
//int main()
//{
//	//printf("%d ",printf("%d ",printf("%d ",43)));//输出43 3 2 ，因为有空格的缘故，最内部的输出"43空格"，
//												//printf函数返回结果为3。第二层相当于printf("%d ",3);
//												//输出结果为3空格。printf返回值为2
//	//printf("%d", printf("%d", printf("%d", 43)));//输出结果为4321，对比于上面的，相当于少了空格
//	printf("%d", printf("%d", printf("%s", "猪头")));//输出结果为"猪头41"
//	//由此可见printf函数的返回值为他所打印出的字节的个数
//	return 0;
//}


/*********************************************函数的定义和声明*****************************/
#include "calc.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("%d\n",sum);
	return 0;
}