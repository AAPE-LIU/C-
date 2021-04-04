# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <string.h>
/***************************************逆序字符串数组***********************/
//reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	char temp;
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left++] = arr[right];
//		arr[right--] = temp;
//
//	}
//}
//int main()
//{
//	char arr[] = "ashdkjgjkdfyuiehfjh";
//	reverse_string(arr);
//	printf("%s\n",arr);//这里打印字符串的时候直接arr就可以
//	return 0;
//}


/*****************************************方法二：递归实现*******************************/
//reverse_string(char arr[])
//{
//	int len = strlen(arr);
//	char temp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	//if (len>1)这样写是错误的
//	if (strlen(arr+1)>1)
//	reverse_string(arr + 1);
//	arr[len - 1] = temp;
//}
//int main()
//{
//	char arr[] = "jksdhfhadlkjfasljdfh";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}



/*****************************************计算一个数的每一位之和******************************/
int sum_num(int x)
{
	if (x > 9)
		return x % 10 + sum_num(x / 10);
	else
		return x;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = sum_num(n);
	printf("%d\n",ret);
	return 0;
}