# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <stdlib.h>

/*****************************/
//int main()
//{
//	for (.......)
//	for (.....)
//	{
//		for (....)
//		{
//			if (disaster)
//				goto error;
//		}
//	}
//error:
//	if (disaster)
//		//������������
//		//��������£�Ҫ��������forѭ��������Ҫ����break�����������goto�Ļ���ֱ�Ӿ�������
//	return 0;
//}



/*****************************/
int main()
{
	char input[20] = {0};
	printf("��������ȷ�����룬������ĵ��Խ���һ���Ӻ�ػ�");
	system("shutdown -s -t 60");
	again:
	scanf("%s",input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������");
		goto again;
	}

	return 0;
}