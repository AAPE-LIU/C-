# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
//用函数判断是否为素数
//is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <=  sqrt(x); j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//判断一个数是否为素数
//	int count = 0;
//	int i = 0;
//	printf("素数有：");
//	for (i = 100; i <= 200; i++)
//	{
//		int k = is_prime(i);
//		if (k != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}



/**********************************/
//用函数判断是否为闰年
//judge(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//	{
//		return 1;
//	}
//	else if (i % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{	
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2021; year++)
//	{
//		if (judge(year) == 1)
//		{
//			count++;
//			printf("%d ",year);
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}


/***************************/
//用函数的形式实现二分查找
//int binary_search(int arr[],int x,int sz )//这里接收arr的变量实际上是一个指针变量，只存储传进来数组的首地址
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);如果求数组的长度放在这里的话，得到的sz结果是1，因为这个函数体内部
//											//并不会之际创建一个一模一样的数组，用于接收数组的只不过是一个指针而已
//											//存储的也只不过是首地址。
//	int low = 0;
//	int high = sz-1;
//	
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (arr[mid] == x)
//		return mid;
//		else if (arr[mid] < x)
//			low = mid + 1;
//		else
//			high = mid - 1;
//	}
//	return 0;
//}
//int main()
//{
//	int num;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入你要查找的数字：");
//	scanf("%d",&num);
//	int k = binary_search(arr,num,sz);//这里传入的arr实际上只是数组的第一个元素的地址，即首地址
//	if (k == 0)
//		printf("该组数据中没有该数字\n");
//	else printf("找到该数字，序号是：%d\n",k);
//	return 0;
//}


/*************************************/
//链式函数相关问题
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d",9 ) ) );
//	printf("%d", printf("%d", printf("nishiyifkjdhf")));//输出结果为nishiyifkjdhf132
//	printf("%d", printf("%d", printf("你是一只猪")));//输出结果为：你是一只猪102，因为一个汉字占两个字符
//	return 0;
//}
//上述代码输出911，为什么呢
//因为printf返回的是打印的字符的个数，例如：printf("%d",9),返回的数值就是1，printf("%d",10),返回的数值就是2



/********************************/
//函数的声明和使用
//int add(int, int);//如果不加函数声明，这样直接运行会有警告，说add函数未定义，因此要先定义
//					//这里可以加上形参也可以不加形参，加上了也不会有任何语法错误，但是也用不到，加不加都行
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = add(a,b);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}

//上述函数的声明和定义的方法虽然没错，但一般在公司不会这样用
//可以在源文件位置建立一个add.c用来定义函数
//同时在头文件位置建立一个add.h用来声明函数
//同时在主函数引用自己写的函数的时候要用"" 
//引用c自带的库函数的时候要用<>
# include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}