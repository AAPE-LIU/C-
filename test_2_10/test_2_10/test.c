# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
//有一种变量是用来存放地址的——指针变量
//指针是个变量，他是用来存放地址的，怎么用这个指针呢，解引用操作符
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);//%p是用来输出地址的
//	printf("%p\n", p);//这两种输出方式输出的结果是一样的 
//	*p = 20;//*代表解引用操作符，这里的*p就是指p所指向的那片空间的内容
//	return 0;
//}
//一个指针变量的大小，在32位平台上是4Byte，在64位平台上是8Byte
//修改平台步骤：Debug-->配置管理器-->新建-->x64



/*****************************************/
//结构体类型
struct Book
{
	char name[20];//定义书名
	int price;//定义书的价格
};
int main()
{
	struct Book b1 = { "C语言程序设计", 55 };//结构体的初始化
	struct Book*pb = &b1;//能不能用pb输出结构体中的内容呢？
	//注意：(*pb)是等价于b1的
	printf("用*pb输出的结果:%s\n", (*pb).name);
	printf("用指针输出的书名：%s\n", pb->name);//用指针输出时用->
	printf("用指针输出的价格 = %d\n", pb->price);
	printf("书的名字：%s\n", b1.name);//用结构体变量名输出时用 .
	printf("书的价格 = %d\n", b1.price);
	b1.price = 74;
	strcpy(b1.name, "数据结构");//修改字符串只能用strcpy函数，用这个函数要用到string.h这个头文件
	printf("修改后书的价格 = %d\n", b1.price);
	printf("修改后书的名字：%s\n", b1.name);
	printf("修改后用指针输出的书名：%s\n", pb->name);
	printf("修改后用指针输出的价格 = %d\n", pb->price);
	return 0;
	//.操作符用在结构体变量上，结构体变量.成员
	//->用在结构体指针上，结构体指针->成员
}