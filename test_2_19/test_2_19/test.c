# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//switch(c)��c��������float���͵ģ�int��long��char���͵Ķ����ԣ�char���͵��ַ���Ӧ��ASCIIֵ���������͵ģ�����charҲ�ǿ���
/********************************************/
//�����������մӴ�С��˳���������
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("��������������\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = b;
//		b = a;
//		a = temp;
//	}
//	if (a < c)
//	{
//		int temp = c;//�����temp����Ҫ���¶��壬��Ϊ���涨���temp��������ֻ���������if�����
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
//��������������Լ����������շת�����
//int main()
//{
//	int m = 0, n = 0;
//	printf("�������������֣�Ҫ���һ�����ڵ��ڵڶ���\n");
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
//�ж��Ƿ�Ϊ���꣺
//��ĳһ�������ܱ�4����ʱ���������꣬���������һ���ܱ�100����ȴ���ܱ�400��������ô��һ��Ҳ��������
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
//		//��ȻҲ����һ�仰�͸㶨
//		/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ",year);
//			count++
//		}*/
//	}
//	printf("\n");
//	printf("����%d������\n",count);
//	return 0;
//}



/***************************************/
//��ӡ100��200֮�������
int main()
{
	int j = 0;
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i / 2; j++)//����������һЩ�Ż���ֻҪ����������������һ��Ͳ�����������������
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
	printf("\n�ܹ���%d������\n",count);
	return 0;
}