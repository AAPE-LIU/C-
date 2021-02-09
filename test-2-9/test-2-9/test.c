# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
//用函数比较两个数的大小
//int MAX(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	int num1=10, num2=20;
//	int max=0;
//	printf("请输入两个数字");
//	scanf("%d%d", &num1, &num2);
//	max = MAX(num1, num2);
//	printf("较大的那个数字是%d\n", max);
//	return 0;
//}


/********************************/
//sizeof是一个操作符不是一个函数
//sizeof(a)和 sizeof a 是一样的，如果他是一个函数的话括号是不可以省略的
//但是sizeof(int) 不可以省略括号
//~对一个数的二进制位按位取反
//int main()
//{
//	int a = 0;//int 型占用4个字节，32个bit位00000000000000000000000000000000
//	int b = ~a;//11111111111111111111111111111111
//	//原码，反码，补码
//只要是整数，内存中存储的都是二进制的补码，但是正数，原，反，补，三码统一
//	//负数在内存中存储的时候，存储的是二进制位的补码
//	//b是一个带符号的int型，最高位表示符号位，1表示负号
//	//原码符号位不变其余位按位取反得到反码，反码+1得到补码
//	//同样，补码-1得到反码，反码符号位不变其余位按位取反得到原码
//	//上述111····111是补码，存储时要存储补码   使用时，打印时要打印源码
//	//补码先-1变成反码，再保持符号位不变其余位按位取反得到原码
//	printf("%d\n", b);//输出结果为-1
//	return 0;
//}



/***********************************************************/
//++运算符的使用方法
//int main()
//{
//	int a = 10;
//	int c = 20;
//	int b = a++;//后置++，先把a的值赋给b，a再++
//	printf("a = %d  b = %d\n", a, b);
//	c = ++a;//前置++，先++再把++以后的值赋值给c
//	printf("a = %d  c = %d\n", a, c);
//
//	return 0;
//}

//(类型)：强制类型转换符
//int main()
//{
//	int a = 3.14;//直接这样转换会出现丢失数据的警告，但是我就是不想看见这个警告可以用强制类型转换
//	int a = (int)3.14;
//	return 0;
//}



//&&逻辑与，&按位与，要分清楚
//  ||逻辑或， |按位或，要分清楚



/*************************************/
//C语言中常见关键字
//auto 局部变量都有的，局部变量出了作用域就不在了，所以说局部变量是自动创建自动销毁的，前面都省略了auto
//break 用来终止循环，switch语句中也会用到
//case
//char
//const 常变量
//continue  用于循环里面
//default
//extern  引入外部符号，其他源文件的全局变量可以用这个关键字引入
//register 寄存器关键字
//signed  一般来说int a 定义的都是有符号的变量，而signed定义的就是有符号变量，int前面都省略了一个signed
//unsigned 无符号变量
//union 联合体或者共用体
//typedef - 类型重定义 例如：unsigned int a = 20 类型名有点长，就可以给他重定义
//							typedef unsigned int u_int就把他定义为了u_int类型，代表着unsigned int 等价于u_int a = 20
//static 静态变量：当static修饰局部变量时，局部变量的生命周期变长，出了作用域不会销毁。
//当static修饰全局变量时，改变的是他的作用域。若创建两个源文件，test.c和add.c   add.c中的全局变量可以在test.c中通过extern声明得到使用
//但是如果用static修饰了add.c中的全局变量，就不能在test.c中继续使用
//extern用来声明外部函数也是同样的，例如声明add.c中的Add函数（实现两个数相加操作的函数），就可以写成extern int Add(int,int);
void test(){
	//int a = 1;
	static int a = 1;
	a++;
	printf("%d\n", a);//直接int定义变量输出5个2
					  //用static int定义变量输出结果是23456
}
int main()
{
	int i = 0;
	while (i < 5){
		test();
		i++;
	}
	return 0;
}

