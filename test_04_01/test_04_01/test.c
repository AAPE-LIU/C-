# define _CRT_SECURE_NO_WARNINGS 1
/*************************************����˳���ӡһ����������ÿһλ*************************/
//void prt(int x)
//{
//	if (x > 9)//�ݹ�������������������ʱ���еݹ�
//	{
//		prt(x/10);//ÿ�εݹ����֮��Խ��Խ�ӽ��������
//		
//	}
//	printf("%d", x % 10);
//}
//int main()
//{
//	int a = 202103;
//	prt(a);
//	return 0;
//}
//�ڴ��Ϊ��ջ������� �ֲ���������ʽ������*��������*
//		    ��������� ��̬���������
//			��̬������̬������ȫ�ֱ���
//���к�������Ҫ����ռ䣬ռ�ô����ڴ�



/********************************ʵ��strlen***************************/
//int str_len(char arr[],int i)
//{
//
//	if (arr[i] != '\0')
//		str_len(arr,++i);
//	else return i;
//}
/*
int str_len(char * str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
		int a = 0;
		char arr[] = "abcde";
		int len = str_len(arr,a);
		printf("%d\n",len);
		return 0;
	}
}
*/

/**********************************����������ʵ��*************************************/
//int str_len(char *str)
//{
//	while (*str != '\0')
//	{
//		return 1 + str_len(str+1);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char arr[] = "abcde";
//	int len = str_len(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{



/*************************************************���n��쳲�������****************************/
int count = 0;
//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	if (x > 2)
//	{
//		if (x == 3)
//			count++;
//		return fib(x - 2) + fib(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int num = fib(n);
//	printf("num = %d\n",num);
//	printf("count = %d\n",count);
//	return 0;
//}
//��������������40������50��쳲���������ʱ�����н���ͻ��ú�������Ϊһ��fib��3���������ܶ��������ϰٴ�
//Ч��̫�ͣ���ô�ͳ����÷ǵݹ���㷨�����
//����������������ͣ��ǰ��,,������2��3��00��04
int main()
{ 
	int n = 0;
	scanf("%d",&n);
	if (n == 1 || n == 2)
		printf("%d",1);
	if (n > 2)
	{
		int a = 1;
		int b = 1;
		int c = 1;
		for (int i = 1; i <= n - 2; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d\n",c);
	}
	return 0;
}