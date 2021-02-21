# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
//时间戳：计算机上当前时间减去1970.1.1.0：0：0：（1970年一月一日0点0分0秒）=（xxxx）秒
//时间戳要用到time（）函数，返回值的类型是time_t，time_t是对_time32/64_t的重定义，而_time32/64_t的本质是long类型的,time函数的头文件是time.h
//而要生成随机数要用到rand（）函数，而要使用rand（）函数要在前面使用srand（）函数:生成随机数的起点，srand函数内部要求用int类型的
//本来time（）函数内部要用到time_t *类型的参数，而此程序只是简单生成一个随机数因此用一个空指针就行了，NULL；
//而time（）返回的值是long类型的因此在srand（）内部要强制转换成int
//因此格式就写成了srand((unsigned int) time(null));
void game()
{
	int guess = 0;
	int ret = 0;
	printf("猜数字\n");
	//srand((unsigned int) time(NULL));//如果这个函数放在这里的话，每次玩游戏都会重新生成一个随机数的起始点，生成的结果就不是那么随机了
									//但是如果放在main函数中的话，即使继续玩游戏也不会生成新的起始数
	//ret = rand();//正常来说rand生成的是从0到rand_MAX的数值，但是这个数值有点大，为0-32767，我们只要1-100，那么就可以按照下面这种做法
	ret = rand() % 100 + 1;
	//printf("%d\n",ret);
	
	while (1)
	{
		printf("请输入你所猜的数字\n");
		scanf("%d", &guess);
	if (guess == ret)
	{
		printf("恭喜你猜对了\n");
		break;
	}
	else if (guess < ret)
	{
		printf("猜小了\n");
	}
	else
	{
		printf("猜大了\n");
	}
	}

}
void menu()
{
	printf("********************************\n");
	printf("**** 1.继续游戏  2.退出游戏*****\n");
	printf("********************************\n");
}
int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));

	do{
		menu();
		printf("请选择\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default :
			printf("输入错误请重新输入\n");
			break;
		}

	} while (choice);//只有当choice = 0的时候游戏结束，循环停止
	return 0;
}