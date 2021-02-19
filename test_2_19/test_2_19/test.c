# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//switch(c)中c不可以是float类型的，int，long，char类型的都可以，char类型的字符对应的ASCII值是整数类型的，所以char也是可以
/********************************************/
//将三个数按照从大到小的顺序依次输出
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("请输入三个数字\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = b;
//		b = a;
//		a = temp;
//	}
//	if (a < c)
//	{
//		int temp = c;//这里的temp必须要重新定义，因为上面定义的temp的作用域只限于上面的if语句中
//		c = a;
//		a = temp;
//	}
//	if (b < c)
//	{
//		int temp = c;
//		c = b;
//		b = temp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}



/*************************************/
//求出两个数的最大公约数，方法：辗转相除法
//int main()
//{
//	int m = 0, n = 0;
//	printf("请输入两个数字，要求第一个大于等于第二个\n");
//	scanf("%d%d",&m,&n);
//	while (m%n)
//	{
//		int r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}


/*******************************************/
//判断是否为闰年：
//当某一年的年份能被4整除时可能是闰年，但是如果这一年能被100整除却不能被400整除，那么这一年也不是闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		//当然也可以一句话就搞定
//		/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//			count++
//		}*/
//	}
//	printf("\n");
//	printf("共有%d个闰年\n",count);
//	return 0;
//}



/***************************************/
//打印100到200之间的素数
int main()
{
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i / 2; j++)//这里我做了一些优化，只要除数超过被除数的一半就不会再有整除出现了
		{
			if (i%j == 0)
				break;
		}
		if (j == i / 2 + 1)
		{
		printf("%d ", i);
		count++;
		}
	}
	printf("\n总共有%d个素数\n",count);
	return 0;
}