# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
/******************************************/
//1.������������ֵ�������õ�����������
//int main()
//{
//	int a = 10, b = 15; 
//	printf("����ǰa = %d,b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������a = %d,b = %d\n", a, b);
//
//
//	return 0;
//}





/********************************************/
//2.�ҳ�ֻ����һ�ε���������ĳ��Ԫ��ֻ����һ���⣬����Ԫ�ؾ���������
//  ����1��������ⷨ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 7, 7, 5, 5, 6, 1, 2, 3, 4 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//			for (j = 0; j < sz; j++)
//			{
//				if (arr[i] == arr[j])
//					count++;
//			}
//			if (count == 1)
//				printf("ֻ������һ�ε�������%d\n",arr[i]);
//	}
//
//	return 0;
//}





/******************************************/
//����2�����
//3^3 = 0;
//011
//011
//5^5 = 0;
//101
//101
//0^3 = 3
//0^5 = 5
//0^a = a
//3^5^3 = 5
//3^3^5 = 5
//��������㽻���ɵ�
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5 };
//	int i;
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		 k =k ^ arr[i];
//	}
//	printf("ֻ����һ�ε������ǣ�%d\n", k);
//	return 0;
//}




/******************************************/
//��Cдһ���ػ����򣬳�������һ�����ڵ��Թػ�����������������ȡ���ػ���
//���� 3.1 4_0s
# include <stdlib.h>//system()
# include <string.h>//strcmp()
int main()
{
	//�ػ�
	//system���� -ר������ִ��ϵͳ�����
	char input[20] = { 0 };
	system("shutdown -s -t 60");//�ػ�
again:
	printf("��ĵ��Խ���һ���Ӻ�ػ��������������ȡ���ػ�");
	scanf("%s\n", input);
	if (strcmp(input, "������") == 0)
		system("shutdown -a");
	else goto again;

	return 0;
}