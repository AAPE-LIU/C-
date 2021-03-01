# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>
//strcpy的用法，strcpy(char * destination , const char * source)
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2,arr1);//会把\0也拷贝过来arr2中就存放了bit\0#######
//	printf("%s\n",arr2);
//	int a = strlen(arr1);
//	printf("%d\n",a);
//	return 0;
//}

/**********************************/
//memset的使用，memset（void * ptr,int value,size_t num）,内存设置函数是指，将ptr所指向的内存单元中前num个单元中的值设置成value
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1,'*',5);
//	printf("%s\n",arr1);
//	return 0;
//}



/**********************************/
//交换两个数的函数
void swap(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d \n",a,b);
	swap(a,b);
	printf("a = %d,b = %d \n", a, b);//这样根本交换不了
	return 0;
}
