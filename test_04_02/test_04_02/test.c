# define _CRT_SECURE_NO_WARNINGS 1
/********************************����1/1-1/2+1/3-1/4��������-1/100***********************/
# include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%2 != 0)
//		sum += 1.0 / i;
//		else sum -=1.0 / i;
//	}
//	printf("%f\n", sum);
//	//����2��
//	double sum2 = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		
//			sum2 +=flag* 1.0 / i;
//			flag = -flag;
//	}
//	printf("%lf\n",sum2);
//	return 0;
//}


/**************************************�ҳ�ʮ�������������Ǹ�***************************/
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
	/*int max = 0;
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	*/
	//�����������д�Ǵ���ģ���Ϊ���������ʮ�����ֶ��Ǹ��������ֵ����0
	//���Ҫ���������ַ���
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n",max);
//	return 0;
//}


/***************************************��ӡ�˷��ھ���**************************/
int main()
{
	int i = 0;
	int j = 0;
	for (j = 1; j <= 9; j++)
	{
	
	for (i = 1; i <= j; i++)
	{
		//printf("%d x %d = %d ",j,i,j*i);//%2d��ʾ���ٴ�ӡ2���ַ��������ֻ��һλ���ո���ǰ����ں󣬹���λ
										//%-2d�ʹ����ո��ں�
		printf("%d x %d = %-2d ", j, i, j*i);
	}
	printf("\n");
	}
	return 0;
}

/****************************return a,b;���ص���ʵ��b***************************/
/***************************���ھ۵���ϵĺ���**********************************/
//���ھۣ����й������������Լ������
//����ϣ�������Ҫ����ĳ��򣬺����й�����Ҳ����ͨ���Ը�ǿ