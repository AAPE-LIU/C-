# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
//�ú����ж��Ƿ�Ϊ����
//is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <=  sqrt(x); j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//�ж�һ�����Ƿ�Ϊ����
//	int count = 0;
//	int i = 0;
//	printf("�����У�");
//	for (i = 100; i <= 200; i++)
//	{
//		int k = is_prime(i);
//		if (k != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}



/**********************************/
//�ú����ж��Ƿ�Ϊ����
//judge(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//	{
//		return 1;
//	}
//	else if (i % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{	
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2021; year++)
//	{
//		if (judge(year) == 1)
//		{
//			count++;
//			printf("%d ",year);
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}


/***************************/
//�ú�������ʽʵ�ֶ��ֲ���
//int binary_search(int arr[],int x,int sz )//�������arr�ı���ʵ������һ��ָ�������ֻ�洢������������׵�ַ
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);���������ĳ��ȷ�������Ļ����õ���sz�����1����Ϊ����������ڲ�
//											//������֮�ʴ���һ��һģһ�������飬���ڽ��������ֻ������һ��ָ�����
//											//�洢��Ҳֻ�������׵�ַ��
//	int low = 0;
//	int high = sz-1;
//	
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (arr[mid] == x)
//		return mid;
//		else if (arr[mid] < x)
//			low = mid + 1;
//		else
//			high = mid - 1;
//	}
//	return 0;
//}
//int main()
//{
//	int num;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("��������Ҫ���ҵ����֣�");
//	scanf("%d",&num);
//	int k = binary_search(arr,num,sz);//���ﴫ���arrʵ����ֻ������ĵ�һ��Ԫ�صĵ�ַ�����׵�ַ
//	if (k == 0)
//		printf("����������û�и�����\n");
//	else printf("�ҵ������֣�����ǣ�%d\n",k);
//	return 0;
//}


/*************************************/
//��ʽ�����������
//int main()
//{
//	printf("%d\n", printf("%d", printf("%d",9 ) ) );
//	printf("%d", printf("%d", printf("nishiyifkjdhf")));//������Ϊnishiyifkjdhf132
//	printf("%d", printf("%d", printf("����һֻ��")));//������Ϊ������һֻ��102����Ϊһ������ռ�����ַ�
//	return 0;
//}
//�����������911��Ϊʲô��
//��Ϊprintf���ص��Ǵ�ӡ���ַ��ĸ��������磺printf("%d",9),���ص���ֵ����1��printf("%d",10),���ص���ֵ����2



/********************************/
//������������ʹ��
//int add(int, int);//������Ӻ�������������ֱ�����л��о��棬˵add����δ���壬���Ҫ�ȶ���
//					//������Լ����β�Ҳ���Բ����βΣ�������Ҳ�������κ��﷨���󣬵���Ҳ�ò������Ӳ��Ӷ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = add(a,b);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}

//���������������Ͷ���ķ�����Ȼû����һ���ڹ�˾����������
//������Դ�ļ�λ�ý���һ��add.c�������庯��
//ͬʱ��ͷ�ļ�λ�ý���һ��add.h������������
//ͬʱ�������������Լ�д�ĺ�����ʱ��Ҫ��"" 
//����c�Դ��Ŀ⺯����ʱ��Ҫ��<>
# include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}