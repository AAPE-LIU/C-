# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
//��һ�ֱ�����������ŵ�ַ�ġ���ָ�����
//ָ���Ǹ�����������������ŵ�ַ�ģ���ô�����ָ���أ������ò�����
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);//%p�����������ַ��
//	printf("%p\n", p);//�����������ʽ����Ľ����һ���� 
//	*p = 20;//*���������ò������������*p����ָp��ָ�����Ƭ�ռ������
//	return 0;
//}
//һ��ָ������Ĵ�С����32λƽ̨����4Byte����64λƽ̨����8Byte
//�޸�ƽ̨���裺Debug-->���ù�����-->�½�-->x64



/*****************************************/
//�ṹ������
struct Book
{
	char name[20];//��������
	int price;//������ļ۸�
};
int main()
{
	struct Book b1 = { "C���Գ������", 55 };//�ṹ��ĳ�ʼ��
	struct Book*pb = &b1;//�ܲ�����pb����ṹ���е������أ�
	//ע�⣺(*pb)�ǵȼ���b1��
	printf("��*pb����Ľ��:%s\n", (*pb).name);
	printf("��ָ�������������%s\n", pb->name);//��ָ�����ʱ��->
	printf("��ָ������ļ۸� = %d\n", pb->price);
	printf("������֣�%s\n", b1.name);//�ýṹ����������ʱ�� .
	printf("��ļ۸� = %d\n", b1.price);
	b1.price = 74;
	strcpy(b1.name, "���ݽṹ");//�޸��ַ���ֻ����strcpy���������������Ҫ�õ�string.h���ͷ�ļ�
	printf("�޸ĺ���ļ۸� = %d\n", b1.price);
	printf("�޸ĺ�������֣�%s\n", b1.name);
	printf("�޸ĺ���ָ�������������%s\n", pb->name);
	printf("�޸ĺ���ָ������ļ۸� = %d\n", pb->price);
	return 0;
	//.���������ڽṹ������ϣ��ṹ�����.��Ա
	//->���ڽṹ��ָ���ϣ��ṹ��ָ��->��Ա
}