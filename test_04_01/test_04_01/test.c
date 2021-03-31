# define _CRT_SECURE_NO_WARNINGS 1
/*************************************按照顺序打印一个整型数的每一位*************************/
//void prt(int x)
//{
//	if (x > 9)//递归限制条件：满足条件时进行递归
//	{
//		prt(x/10);//每次递归调用之后越来越接近这个条件
//		
//	}
//	printf("%d", x % 10);
//}
//int main()
//{
//	int a = 202103;
//	prt(a);
//	return 0;
//}
//内存分为：栈区：存放 局部变量，形式参数，*函数调用*
//		    堆区：存放 动态分配的区域
//			静态区：静态变量，全局变量
//其中函数调用要分配空间，占用大量内存



/********************************实现strlen***************************/
//int str_len(char arr[],int i)
//{
//
//	if (arr[i] != '\0')
//		str_len(arr,++i);
//	else return i;
//}
/*
int str_len(char * str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
		int a = 0;
		char arr[] = "abcde";
		int len = str_len(arr,a);
		printf("%d\n",len);
		return 0;
	}
}
*/

/**********************************不创建变量实现*************************************/
//int str_len(char *str)
//{
//	while (*str != '\0')
//	{
//		return 1 + str_len(str+1);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char arr[] = "abcde";
//	int len = str_len(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{



/*************************************************求第n个斐波那契数****************************/
int count = 0;
//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	if (x > 2)
//	{
//		if (x == 3)
//			count++;
//		return fib(x - 2) + fib(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int num = fib(n);
//	printf("num = %d\n",num);
//	printf("count = %d\n",count);
//	return 0;
//}
//这个函数，当求第40甚至第50个斐波那契数的时候运行结果就会变得很慢，因为一个fib（3）甚至可能都被调用上百次
//效率太低，那么就尝试用非递归的算法来解决
//分配三个变量，不停的前进,,函数（2）3：00：04
int main()
{ 
	int n = 0;
	scanf("%d",&n);
	if (n == 1 || n == 2)
		printf("%d",1);
	if (n > 2)
	{
		int a = 1;
		int b = 1;
		int c = 1;
		for (int i = 1; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d\n",c);
	}
	return 0;
}