# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>
//strcpy���÷���strcpy(char * destination , const char * source)
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2,arr1);//���\0Ҳ��������arr2�оʹ����bit\0#######
//	printf("%s\n",arr2);
//	int a = strlen(arr1);
//	printf("%d\n",a);
//	return 0;
//}

/**********************************/
//memset��ʹ�ã�memset��void * ptr,int value,size_t num��,�ڴ����ú�����ָ����ptr��ָ����ڴ浥Ԫ��ǰnum����Ԫ�е�ֵ���ó�value
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1,'*',5);
//	printf("%s\n",arr1);
//	return 0;
//}



/**********************************/
//�����������ĺ���
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
	printf("a = %d,b = %d \n", a, b);//����������������
	return 0;
}
