#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <windows.h>
/*********************************/
//ʵ���ַ����������м���
//int main()
//{
//	char arr1[] = "I LOVE XIE SISI";
//	char arr2[] = "^_^ ^_^ ^_^ ^_^";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//ע������Ҫ��ȥ2������1����Ϊ�ַ���������־'\0'Ҳ����һ���ַ�
//												//"abc"�ַ���������ʵ��4��c���±���2������Ҳ��������������д��
//	//int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	left++;
//	right--;
//	printf("%s\n",arr2);
//	Sleep(1000);//Sleep������Ҫ��windows.hͷ�ļ������������ӳ�ִ�е�ʱ�䵥λΪ����
//	system("cls");//cls������������Ļ��system�������ϵͳ������Ҫ�õ�stdlib.h���ͷ�ļ�
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


/************************************/
//ֻ�����û������������룬���������ȷ����ʾ��½�ɹ���������ξ��������˳�����
int main()
{
	int i = 0;
	char ret[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("��������ȷ�����룺\n");
		scanf("%s",ret);
		//if (ret == "������")// == ���������ж��ַ����Ƿ���ȣ�fi��������������ʹret�д�ŵ��ǣ�������Ҳ�������if�ڲ�
							//�Ƚ������ַ���Ӧ����strcmp�⺯�����Ϲ��������ַ�����������������һ��0������ȷ���-1
							//ͬʱҪ����string.h���ͷ�ļ�
		if (strcmp(ret,"������") == 0)
		{
			printf("������ȷ\n");
			break;
		}
	}
	if (i ==3 )
	printf("������󼴽��˳�����\n");
	return 0;
}