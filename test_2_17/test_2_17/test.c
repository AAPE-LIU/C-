#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			//break;//用break的时候输出结果为1，2，3，4
//			continue;//用continue的时候输出结果为1，2，3，4，6，7，8，9，10
//		printf("%d ", i);
//	}
//	return 0;
//}

/*************************************/
//for循环的一些变种
//int main()
//{
//	for (;;)	//for循环的，初始化，判断，调整部分都可以省略；
//				//当判断部分省略时，那判断条件就是：恒为真；
//	{
//		printf("刘港卫是猪\n");
//	}
//	return 0;
//}


/*******************************/
//int main()
//{
//	int i = 0, j = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	for (j = 0; j < 10; j++)//i = 0, j = 0不省略打印100个hehe
//	//		printf("hehe\n");
//	//}
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//i = 0, j = 0省略打印10个hehe
//			printf("hehe\n");//i = 0,进入循环，j从0到10，当j = 10的时候推出内层循环，i++，1<10,进入内层循环，但是此时j = 10
//							//不会执行内层循环里面的内容
//	}
//	return 0;
//}




/***********************************/
//下列代码循环多少次
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++)
//	{
//		j++;
//	}
//	return 0;
//}
//这个代码循环0次，判断条件里面并不是一个判断语句，是一个赋值语句，j = 0的值就是j的值，为0，循环压根就进不去
//如果判断语句里面是 k = 1或者其他非0的数字，那么就是一个死循环



/******************************************/
//计算n的阶乘
//int main()
//{
//	int sum = 1;
//	int i;
//	int n = 0;
//	printf("输入要阶乘的数");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//计算1！+2！+3！+4！+····+10！
//int main()
//{
//	int j;
//	int sum2 = 0;
//	int i = 1;
//	int n;
//	printf("请输入要计算的数字");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int sum1 = 1;
//		for (j = 1; j <= i; j++)
//		{
//			sum1 = sum1 * j;
//		}
//		sum2 = sum2 + sum1;
//	}
//	printf("%d\n", sum2);
//	return 0;




//}*///这种做法效率比较低，算出来前面的阶乘后面的直接乘以一个数就出来了
//int main()
//{
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	int n;
//	printf("请输入要计算的数字");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



/*************************************/
//用二分查找查找有序数组中的元素
int binary_search(int arr[], int key,int sz)
{
	int low = 0, high = sz, mid;
	while (low <= high)
	{
		mid = (low + high) / 2 ;//取中间位置
		if (arr[mid] == key)
			return mid;
		else if (arr[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 17, 19, 20, 23, 25, 27, 30, 34, 35, 36, 37, 39 };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int judge = binary_search(arr, 7,sz);
	if (judge == -1)
		printf("查找失败\n");
	else
		printf("查找成功，序号是%d\n", judge);
	return 0;
}