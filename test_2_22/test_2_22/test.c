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
//		//处理错误情况，
//		//正常情况下，要跳出三层for循环至少需要三层break，但是如果用goto的话，直接就跳出了
//	return 0;
//}



/*****************************/
int main()
{
	char input[20] = {0};
	printf("请输入正确的密码，否则你的电脑将在一分钟后关机");
	system("shutdown -s -t 60");
	again:
	scanf("%s",input);
	if (0 == strcmp(input, "你是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		printf("密码错误请重新输入");
		goto again;
	}

	return 0;
}