#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			//break;//��break��ʱ��������Ϊ1��2��3��4
//			continue;//��continue��ʱ��������Ϊ1��2��3��4��6��7��8��9��10
//		printf("%d ", i);
//	}
//	return 0;
//}

/*************************************/
//forѭ����һЩ����
//int main()
//{
//	for (;;)	//forѭ���ģ���ʼ�����жϣ��������ֶ�����ʡ�ԣ�
//				//���жϲ���ʡ��ʱ�����ж��������ǣ���Ϊ�棻
//	{
//		printf("����������\n");
//	}
//	return 0;
//}


/*******************************/
//int main()
//{
//	int i = 0, j = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	for (j = 0; j < 10; j++)//i = 0, j = 0��ʡ�Դ�ӡ100��hehe
//	//		printf("hehe\n");
//	//}
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//i = 0, j = 0ʡ�Դ�ӡ10��hehe
//			printf("hehe\n");//i = 0,����ѭ����j��0��10����j = 10��ʱ���Ƴ��ڲ�ѭ����i++��1<10,�����ڲ�ѭ�������Ǵ�ʱj = 10
//							//����ִ���ڲ�ѭ�����������
//	}
//	return 0;
//}




/***********************************/
//���д���ѭ�����ٴ�
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++)
//	{
//		j++;
//	}
//	return 0;
//}
//�������ѭ��0�Σ��ж��������沢����һ���ж���䣬��һ����ֵ��䣬j = 0��ֵ����j��ֵ��Ϊ0��ѭ��ѹ���ͽ���ȥ
//����ж���������� k = 1����������0�����֣���ô����һ����ѭ��



/******************************************/
//����n�Ľ׳�
//int main()
//{
//	int sum = 1;
//	int i;
//	int n = 0;
//	printf("����Ҫ�׳˵���");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//����1��+2��+3��+4��+��������+10��
//int main()
//{
//	int j;
//	int sum2 = 0;
//	int i = 1;
//	int n;
//	printf("������Ҫ���������");
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




//}*///��������Ч�ʱȽϵͣ������ǰ��Ľ׳˺����ֱ�ӳ���һ�����ͳ�����
//int main()
//{
//	int ret = 1;
//	int sum = 0;
//	int i = 0;
//	int n;
//	printf("������Ҫ���������");
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
//�ö��ֲ��Ҳ������������е�Ԫ��
int binary_search(int arr[], int key,int sz)
{
	int low = 0, high = sz, mid;
	while (low <= high)
	{
		mid = (low + high) / 2 ;//ȡ�м�λ��
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
		printf("����ʧ��\n");
	else
		printf("���ҳɹ��������%d\n", judge);
	return 0;
}