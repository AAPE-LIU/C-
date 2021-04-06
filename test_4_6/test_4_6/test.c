# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
//int array[];//这种方法可以

//int array[10];//这种方法可以

//int count = 10;
//int array[count] = {0};//这种方法不可以

//[]中不可以是变量，只能是常量

//int array[10] = {1,2,3};此时是不完全初始化，数组中的元素是1，2，3，0，0，0，0，0，0，0


/****************************************sizeof与strlen的区别************************************/
//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char ch[] = { 'a', 'b', 'c', 'd' };//数组中存放的是a,b,c,d
//	char ch2[] = "abcd";//这种定义方法看似与上面的一样，实则不同，这一条：a,b,c,d,'\0';
//	printf("ch = %d\n",strlen(ch));//strlen()直到遇到'\0'才会停下，因此会一直往后找。是个随机值
//	printf("ch2 = %d\n", strlen(ch2));//4
//	printf("ch = %d\n", sizeof(ch));//四个字符，每个字符一个字节，因此是4
//	printf("ch2 = %d\n", sizeof(ch2));//加上'\0'总共5个字符，因此是5
//	return 0;
//}




/*****************************************二维数组的初始化与创建*******************************/
//int main()
//{
//	int arr1[3][4] = { 1, 2, 3, 4, 5 };//不完全初始化，第一行为1234，第二行为5000，第三行为0000
//
//	//int arr2[3][4] = { { 1,2 }, { 3 }, {4,5} };//我想让第一行存放1，2。第二行存放3.第三行存放4，5
//	//把每一行当作一个元素，就构成了一个元素个数为3的一维数组。
//
//	int arr2[][4] = { { 1, 2 }, { 3 }, { 4, 5 } };//即使没有行号也不会有任何的问题。
//	//就类似于int arr2[] = {a,b,c};方括号中就默认是3个元素，上面二维也默认为三行
//	//int arr2[3][] = { { 1, 2 }, { 3 }, { 4, 5 } };这样就会有问题，列是不能省略的。
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3;i++)
//	for (j = 0; j < 4; j++)
//	{
//		printf("&arr2[%d][%d] = %p\n",i,j,&arr2[i][j]);
//	}
//	return 0;
//}
//用指针的方法遍历二维数组
//int main()
//{
//	int i = 0;
//	int arr[][4] = { { 1, 2 }, { 4, 5 }, { 7, 8 } };
//	int *p = arr;
//	//for (i = 0; i <12;i++)
//		//printf("%d", *p++);
//	printf("p     = %p\n",p);
//	printf("p+1   = %p\n", p + 1);
//	printf("arr   = %p\n", arr);
//	printf("arr+1 = %p\n", arr+1);
//	printf("++p   = %p\n", ++p);
//	return 0;
//	//为什么是这种规则？
//}


/**********************************************冒泡排序:降序排列，从最后一个元素遍历*************************************/
//void bubble_sort(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	int flag = 1;
//	while (flag != 0)
//{
//	for (i = n - 1; i > 0; i--)
//	{
//		flag = 0;
//		for (j = n - 1; j > n - i - 1; j--)
//		if (arr[j] > arr[j - 1])
//		{
//			temp = arr[j];
//			arr[j] = arr[j - 1];
//			arr[j - 1] = temp;
//			flag = 1;
//		}
//		
//	}
//}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 2, 4, 8, 65, 44, 33, 25, 65, 54, 34 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	printf("%d ",arr[i]);
//	return 0;
//}

/********************************************升序排列：从第一个元素开始遍历**************************/
void bubble_sort(int arr[], int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int flag = 1;
	while (flag != 0)
	{
		flag = 0;
	for (i = 0; i < n - 1;i++)
	for (j = 0; j < n - 1 - i;j++)
	if (arr[j] > arr[j + 1])
	{
		temp = arr[j + 1];
		arr[j + 1] = arr[j];
		arr[j] = temp;
		flag = 1;
	}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 2, 4, 8, 65, 44, 33, 25, 65, 54, 34 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	return 0;
}