# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
//ʱ�����������ϵ�ǰʱ���ȥ1970.1.1.0��0��0����1970��һ��һ��0��0��0�룩=��xxxx����
//ʱ���Ҫ�õ�time��������������ֵ��������time_t��time_t�Ƕ�_time32/64_t���ض��壬��_time32/64_t�ı�����long���͵�,time������ͷ�ļ���time.h
//��Ҫ���������Ҫ�õ�rand������������Ҫʹ��rand��������Ҫ��ǰ��ʹ��srand��������:�������������㣬srand�����ڲ�Ҫ����int���͵�
//����time���������ڲ�Ҫ�õ�time_t *���͵Ĳ��������˳���ֻ�Ǽ�����һ������������һ����ָ������ˣ�NULL��
//��time�������ص�ֵ��long���͵������srand�����ڲ�Ҫǿ��ת����int
//��˸�ʽ��д����srand((unsigned int) time(null));
void game()
{
	int guess = 0;
	int ret = 0;
	printf("������\n");
	//srand((unsigned int) time(NULL));//������������������Ļ���ÿ������Ϸ������������һ�����������ʼ�㣬���ɵĽ���Ͳ�����ô�����
									//�����������main�����еĻ�����ʹ��������ϷҲ���������µ���ʼ��
	//ret = rand();//������˵rand���ɵ��Ǵ�0��rand_MAX����ֵ�����������ֵ�е��Ϊ0-32767������ֻҪ1-100����ô�Ϳ��԰���������������
	ret = rand() % 100 + 1;
	//printf("%d\n",ret);
	
	while (1)
	{
		printf("�����������µ�����\n");
		scanf("%d", &guess);
	if (guess == ret)
	{
		printf("��ϲ��¶���\n");
		break;
	}
	else if (guess < ret)
	{
		printf("��С��\n");
	}
	else
	{
		printf("�´���\n");
	}
	}

}
void menu()
{
	printf("********************************\n");
	printf("**** 1.������Ϸ  2.�˳���Ϸ*****\n");
	printf("********************************\n");
}
int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));

	do{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("������Ϸ\n");
			break;
		default :
			printf("�����������������\n");
			break;
		}

	} while (choice);//ֻ�е�choice = 0��ʱ����Ϸ������ѭ��ֹͣ
	return 0;
}