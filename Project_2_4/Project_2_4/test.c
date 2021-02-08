# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
/******************************************/
//1.交换两个数的值但不能用到第三个变量
//int main()
//{
//	int a = 10, b = 15; 
//	printf("交换前a = %d,b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后a = %d,b = %d\n", a, b);
//
//
//	return 0;
//}





/********************************************/
//2.找出只出现一次的数，除了某个元素只出现一次外，其余元素均出现两次
//  方法1：暴力求解法
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 7, 7, 5, 5, 6, 1, 2, 3, 4 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//			for (j = 0; j < sz; j++)
//			{
//				if (arr[i] == arr[j])
//					count++;
//			}
//			if (count == 1)
//				printf("只出现了一次的数字是%d\n",arr[i]);
//	}
//
//	return 0;
//}





/******************************************/
//方法2：异或法
//3^3 = 0;
//011
//011
//5^5 = 0;
//101
//101
//0^3 = 3
//0^5 = 5
//0^a = a
//3^5^3 = 5
//3^3^5 = 5
//异或是满足交换律的
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5 };
//	int i;
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		 k =k ^ arr[i];
//	}
//	printf("只出现一次的数字是：%d\n", k);
//	return 0;
//}




/******************************************/
//用C写一个关机程序，程序运行一分钟内电脑关机，如果输入我是猪就取消关机；
//鹏哥 3.1 4_0s
# include <stdlib.h>//system()
# include <string.h>//strcmp()
int main()
{
	//关机
	//system（） -专门用来执行系统命令的
	char input[20] = { 0 };
	system("shutdown -s -t 60");//关机
again:
	printf("你的电脑将在一分钟后关机，输入我是猪可取消关机");
	scanf("%s\n", input);
	if (strcmp(input, "我是猪") == 0)
		system("shutdown -a");
	else goto again;

	return 0;
}