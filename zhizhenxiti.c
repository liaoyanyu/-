#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<search.h>
//������������Ԫ�ص�ַ����������������⣺
//1��sizeof(������)--��ʱ������������Ԫ�ص�ַ�����Ǵ�������������ֽڴ�С
//2��&������--��ʱ��������ʾ��������
//int main()
//{
	//int a[]={1,2,3,4};
	//printf("%d\n",sizeof(a));//16--��������
	//printf("%d\n",sizeof(a+0));//4--����������Ԫ�ص�ַ
	//printf("%d\n",sizeof(*a));//4--��Ԫ�ص�ַ
	//printf("%d\n",sizeof(a+1));//4/8--��Ԫ�ص�ַ��һ
	//printf("%d\n",sizeof(a[1]));//4--�ڶ���Ԫ��
	//printf("%d\n",sizeof(&a));//4/8--&aȡ�������ַ����ַ��ָ�������ָ��4/8���ֽ�
	//printf("%d\n",sizeof(*&a));//16--&aȡ�������ַ��*�����ñ�ʾ�����������顣
	//printf("%d\n",sizeof(&a+1));//4/8--&aȡ�������ַ��&a+1�����������飬ָ��������棬�������ǵ�ַ��ָ��4/8���ֽ�
	//printf("%d\n",sizeof(&a[0]));//4/8--��Ԫ�ص�ַ
	//printf("%d\n",sizeof(&a[0]+1));//4/8--��Ԫ�ص�ַ��һ
	


	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",sizeof(arr));//6-��������������ֽڴ�С��һ��charһ���ֽ�
	//printf("%d\n",sizeof(arr+0));//4/8--����������Ԫ�ص�ַ��ָ��+0����ָ��
	//printf("%d\n",sizeof(*arr));//1--����������Ԫ�ص�ַ��*��Ԫ�ص�ַ��ȡ��Ԫ��ֵ
	//printf("%d\n",sizeof(arr[1]));//1--�ڶ���Ԫ�ص�ֵ
	//printf("%d\n",sizeof(&arr));//4--ȡ��������ĵ�ַ����ָ��
	//printf("%d\n",sizeof(&arr+1));//4/8--ȡ��������ĵ�ַ��һ������ָ��
	//printf("%d\n",sizeof(&arr[0]+1));//4/8--��Ԫ�ص�ַ��1������ָ��


	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",strlen(arr));//���ַ������ȣ��������
	//printf("%d\n",strlen(arr+0));//��Ԫ�ص�ַ+0�������
	//printf("%d\n",strlen(*arr));//����--ȡ��Ԫ��ֵ'a'==97��Ϊ��ַ�������� 
	//printf("%d\n",strlen(arr[1]));//����--��b��==98,98��Ϊ��ַ���д�
	//printf("%d\n",strlen(&arr));//���ֵ��&arr������������
	//printf("%d\n",strlen(&arr+1));//���ֵ--
	//printf("%d\n",strlen(&arr[0]+1));//���ֵ
	/*return 0;
}*/



//int main()
//{
	//��ά����
	//int a[3][4]={0};
	//printf("%d\n",sizeof(a));//48
	//printf("%d\n",sizeof(a[0][0]));//4
	//printf("%d\n",sizeof(a[0]));//16
	//printf("%d\n",sizeof(a[0]+1));//4--a[0]û�е������ڣ����ڣ�a[0]�ǵ�һ�е�������������Ԫ�ص�ַ�����ʾ��һ�е�һ��Ԫ�ص�ַ��������ʾ��һ�е�ַ
	//printf("%d\n",sizeof(*(a[0]+1)));//4
	//printf("%d\n",sizeof(a+1));//4--a�ǵ�һ�еĵ�ַ--ָ��
	//printf("%d\n",sizeof(*(a+1)));//16--�ڶ��еĴ�С
	//printf("%d\n",sizeof(&a[0]+1));//4--ָ��ָ��ڶ��е�ַ
	//printf("%d\n",sizeof(*a));//16--��һ��
	//printf("%d\n",sizeof(a[3]));//16
	//char arr[]="abcdef";
	//printf("%d\n",sizeof(arr));//7-���������ֽڴ�С
	//printf("%d\n",sizeof(arr+0));//4/8--����������Ԫ�ص�ַ��ָ��+0����ָ��
	//printf("%d\n",sizeof(*arr));//1--����������Ԫ�ص�ַ��*��Ԫ�ص�ַ��ȡ��Ԫ��ֵ
	//printf("%d\n",sizeof(arr[1]));//1--�ڶ���Ԫ�ص�ֵ
	//printf("%d\n",sizeof(&arr));//4/8--ȡ��������ĵ�ַ����ָ��
	//printf("%d\n",sizeof(&arr+1));//4/8--������������ĵ�ַ��һ������ָ��
	//printf("%d\n",sizeof(&arr[0]+1));//4/8--��Ԫ�ص�ַ��1������ָ��

	//printf("%d\n",strlen(arr));//6--�ַ������ȣ�������0��
	//printf("%d\n",strlen(arr+0));//6--��Ԫ�ص�ַ+0=��Ԫ�ص�ַ
	//printf("%d\n",strlen(*arr));//����--ȡ��Ԫ��ֵ'a'==97��Ϊ��ַ�������� 
	//printf("%d\n",strlen(arr[1]));//����--��b��==98,98��Ϊ��ַ���д�
	//printf("%d\n",strlen(&arr));//6��&arr������ָ��
	//printf("%d\n",strlen(&arr+1));//���ֵ
	//printf("%d\n",strlen(&arr[0]+1));//&arr[0]�ǡ�a���ĵ�ַ����һ��b�ĵ�ַ��b�����5���ַ�

	//char *p="abcdef";
	//printf("%d\n",sizeof(p));//4-p��ָ�����
	//printf("%d\n",sizeof(p+1));//4/8 --ָ��p+1���ַ�b�ĵ�ַ
	//printf("%d\n",sizeof(*p));//1--�ַ�����һ���ַ�
	//printf("%d\n",sizeof(p[0]));//1--p[0]=*(p+0)=='a'
	//printf("%d\n",sizeof(&p));//4/8--����ָ�룬ȡ��������ĵ�ַ����ָ��
	//printf("%d\n",sizeof(&p+1));//4/8--ȡ��������ĵ�ַ��һ������ָ��
	//printf("%d\n",sizeof(&p[0]+1));//4/8--��Ԫ�ص�ַ��1������ָ��

	//printf("%d\n",strlen(p));//6
	//printf("%d\n",strlen(p+1));//5--ָ��p+1���ַ�b�ĵ�ַ
	//printf("%d\n",strlen(*p));//err--
	//printf("%d\n",strlen(p[0]));//err
	//printf("%d\n",strlen(&p));//���ֵ
	//printf("%d\n",strlen(&p+1));//���ֵ
	//printf("%d\n",strlen(&p[0]+1));//5
	/*return 0;
}*/

//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int *ptr=(int*)(&a+1);//&a�����������ָ�룬+1��ʾ�����������飬��20���ֽڣ���int*��ǿ������ת��Ϊһ�����ĸ��ֽڵ�ָ��
//	printf("%d,%d\n",*(a+1),*(ptr-1));//a����Ԫ�ص�ַ��+1����4���ֽڣ�*����2��ptrָ��5���棬-1�����ĸ��ֽڣ�*����5
//	return 0;
//}



//����p��ֵΪ0x100000����֪�ṹ��Test���͵ı�����С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}* p;
//
//int main()
//{
//	p=(struct Test*)0x100000;
//	printf("%p\n",p+0x1);//0x100014//p�Ƕ�ʮ���ֽڵ�ָ�룬p+1����20���ֽڣ�0x1��16���Ƶ�1��20=16+4=ʮ������14��
//	printf("%p\n",(unsigned long)p+0x1);//ǿ������ת����ʮ������pת��Ϊ������ʮ����1048576��p+1=1048577=ʮ������100001��
//	printf("%p\n",(unsigned int*)p+0x1);//�޷�������ָ���pǿ������ת����p+1�����ĸ��ֽڣ���ֱַ�Ӽ�4==100004
//	return 0;
//}


//int main()
//{
//	int a[4]={1,2,3,4};
//	int *ptr1=(int*)(&a+1);
//	int *ptr2=(int*)((int)a+1);
//	printf("%x,%x",ptr1[-1],*ptr2);
//}


//int main()
//{
//	int a[3][2]={(0,1),(2,3),(4,5)};//()�Ƕ��ű��ʽ��ʽ�н��������ݸ��������a�����н���1,3,5
//	int *p;
//	p=a[0];//a�ǵ�һ�е�ַ��a[0]�ǵ�һ�е�һ��Ԫ�ص�ַ
//	printf("%d",p[0]);//p[0]=*(p+0)
//	return 0;
//}


int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
}