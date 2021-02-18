#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <windows.h>
/*********************************/
//实现字符从两端向中间汇聚
//int main()
//{
//	char arr1[] = "I LOVE XIE SISI";
//	char arr2[] = "^_^ ^_^ ^_^ ^_^";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//注意这里要减去2而不是1，因为字符串结束标志'\0'也算作一个字符
//												//"abc"字符串长度其实是4，c的下标是2；或者也可以像下面这种写法
//	//int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	left++;
//	right--;
//	printf("%s\n",arr2);
//	Sleep(1000);//Sleep函数，要用windows.h头文件，括号内是延迟执行的时间单位为毫秒
//	system("cls");//cls代表的是清空屏幕，system代表的是系统函数，要用到stdlib.h这个头文件
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


/************************************/
//只允许用户输入三次密码，如果密码正确则提示登陆成功，如果三次均错误，则退出程序
int main()
{
	int i = 0;
	char ret[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入正确的密码：\n");
		scanf("%s",ret);
		//if (ret == "我是猪")// == 不能用来判断字符串是否相等，fi里如果是这个，即使ret中存放的是：我是猪，也不会今日if内部
							//比较两个字符串应该用strcmp库函数，拖过这两个字符串相等这个函数返回一个0，不相等返回-1
							//同时要引入string.h这个头文件
		if (strcmp(ret,"我是猪") == 0)
		{
			printf("密码正确\n");
			break;
		}
	}
	if (i ==3 )
	printf("密码错误即将退出程序\n");
	return 0;
}