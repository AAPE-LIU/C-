# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/******************************************memset����*************************/
//void * memset(void * ptr<Ҫ���õ�����>, int value<Ҫ���ó�ʲô>, size_t num<����ǰ���ٸ��ַ�>  );
//int main()
//{
//	char arr[] = "hello big baby";
//	memset(arr,'#',7);
//	printf("%s\n",arr);
//	return 0;
//}
/************************************��ϴ�ֵ�ĺ���********************/
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

/***********************************����ʵ�ֶ��ֲ���*********************/
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
//		printf("�����ҵ������±���%d\n",ret); 
//	else printf("�����ҵ����ֲ���������");
//	return 0;
//}


/*************************************************��������ʽ����*************************/
//int main()
//{
//	//printf("%d ",printf("%d ",printf("%d ",43)));//���43 3 2 ����Ϊ�пո��Ե�ʣ����ڲ������"43�ո�"��
//												//printf�������ؽ��Ϊ3���ڶ����൱��printf("%d ",3);
//												//������Ϊ3�ո�printf����ֵΪ2
//	//printf("%d", printf("%d", printf("%d", 43)));//������Ϊ4321���Ա�������ģ��൱�����˿ո�
//	printf("%d", printf("%d", printf("%s", "��ͷ")));//������Ϊ"��ͷ41"
//	//�ɴ˿ɼ�printf�����ķ���ֵΪ������ӡ�����ֽڵĸ���
//	return 0;
//}


/*********************************************�����Ķ��������*****************************/
#include "calc.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("%d\n",sum);
	return 0;
}