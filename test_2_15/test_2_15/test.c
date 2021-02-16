# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//int main()
//{
//	int a = 0, b = 2;
//	if (a == 1)
//		if (b == 2)
//		printf("haha");
//		else printf("heihei");//else与if秉持就近匹配原则，此处的else和与其对其的if匹配
//		//程序运行，a != 1因此根本进入不了第二个if语句，直接return0；
//	return 0;
//}



/**********************************/
//判断一个数是否为奇数
//int main()
//{
//	int a = 0,k;
//	while (a != -1){
//		printf("请输入你要判断的数字:");
//		scanf("%d", &a);
//		k = a % 2;
//		if (0 == k)
//			printf("%d是偶数\n", a);
//		else
//			printf("%d是奇数\n", a);
//	}
//	return 0;
//}



/*******************************/
//输出1到100之间的奇数
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


/******************************/
//switch语句
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day){//switch后面的表达式必须是整型表达式！！！
//	case 1:		//case后面必须是整型常量表达式，注意！必须要是常量
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");//如果不加break语句，他会从入口开始将接下来的情况依次输出
//							//例如输入3，会输出星期三到星期天
//							//如果加了break会输出完指定情况后跳出switch
//		break;
//	}
//	return 0;
//}



/************************************/
//如果想要星期一到星期五输出工作日，周六周日输出休息日
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day){//switch后面的表达式必须是整型表达式！！！
//	case 1:		//case后面必须是整型常量表达式，注意！必须要是常量
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");//输入12345时不论是输入哪一个都会跳到这一输出语句
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");//输入6，7会执行到这一步
//		break;
//	default:	//当输入的数字不是1~7时就走default，执行default中的内容
//				//一般用来处理非法输入
//				//case和default没有顺序可言，default可以放在case前也可以放在case后面
//				//另外switch允许嵌套使用0
//		printf("输入的数字不正确\n");
//		break;
//	}
//	return 0;
//}



/*********************************/
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue的作用是跳过循环里面剩余代码
//		printf("%d ", i);//这种情况下输出结果为1，2，3，4,并且会陷入死循环，i == 5,回到while，然后再i == 5
//		i++;
//	}
//	return 0;
//}

/****************************/
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//continue的作用是跳过循环里面剩余代码
//		printf("%d ", i);//这种情况下，当执行到5时，会返回while处，然后i++,i变为6，输出结果为1，2，3，4，6，7，8，9，10
//	}
//	return 0;
//}


/*************************/
//getchar(),putchar()，用法
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//		printf("%c\n", ch);
//	}
//	return 0;
//}


/*********************************/
//那么上述代码有什么用呢？？？？

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);//第二种错误情况：假如输入的密码是123456 ABCD程序还是会执行else语句
//							//因为scanf只会读取空格前面的内容，下面的getchar只会消除一个空格，再往下面的一个getchar会读取到A
//	//getchar();			//用来读取缓冲区中剩余的数据'\n'
//	while ((ch = getchar()) != '\n'){//解决第二种错误的办法：
//		;
//	}
//	printf("请确认你的密码Y/N\n");
//	ret = getchar();
//	if ('N' == ret)
//		printf("确认失败\n");
//	else
//		printf("确认成功\n");//第一种错误：这种情况下会执行else语句，而不会等待gechar()，假如输入密码时123456，这些数据都会存入输入缓冲区
//							//最终用回车键来完成scanf的读取，但是这个时候输入缓冲区还剩余一个'\n',而getchar()执行的时候
//							//也会去输入缓冲区找数据，当他发现输入缓冲区非空时就会将输入缓冲区的数据读出，而'\n',的ASCII码值
//							//是10 ，因此ret此时为10 ，执行else语句
//							//那么要想解决这种问题，就必须得把'\n'消除掉，是的缓冲区中没有数据，可以在scanf()之后加上一个getchar()
//	return 0;
//}



/*******************************/
//只打印0——9之间的字符
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')
			continue;
		else
			putchar(ch);
		
	}
	return 0;
}