#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>



//int main()
//{
//	char* p="abcedf";
//	*p='w';
//	printf("%s\n",p);
//	
//	return 0;
//}
//������������Ԫ�ص�ַ
//int main()
//{
//	int arr[3]={1,2,3};
//	int* p=arr;//������������Ԫ�ص�ַ
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		printf("%d ",*(arr+i));
//		printf("%d ",*(p+i));
//		printf("%d ",arr[i]);
//		printf("%d ",p[i]);
//	}
//	return 0;	
//}


//ָ������--�������ָ�������
//int main()
//{
//	int arr[10]={0};//��������
//	char ch[4]={ 0 };//�ַ�������
//	int* parr[4];//�������ָ�������
//	char* pch[5];//����ַ���ָ�������
//	return 0;
//}

//int main()
//{
//	int a=10;
//	int b=20;
//	int c=30;
//	int d=40;
//	int* parr[4]={&a,&b,&c,&d};
//	int i=0;
//	for(i=0;i<4;i++)
//	{
//		printf("%d ",*(parr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={2,3,4,5,6};
//	int arr3[]={3,4,5,6,7};
//	int* parr[]={arr1,arr2,arr3};//ָ�����飬ָ��ָ��������Ԫ�ص�ַ
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		int j=0;
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��--ָ�������ָ��--�������ĵ�ַ
//����ָ��--ָ�����͵�ָ��--������͵ĵ�ַ
//�ַ�ָ��--ָ���ַ���ָ��--����ַ��ĵ�ַ
//int main()
//{
//	
//	//arr--��Ԫ�ص�ַ
//	//&arr[0]--��Ԫ�صĵ�ַ
//	//&arr--����ĵ�ַ
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;//�洢����ĵ�ַ//pΪ����ָ�룬ָ���������飬*���ǽ����ò���
//	return 0;
//}
//int *p1[10]--ָ�����飬���ָ�������==int* p1[10];
//int (*p2)[10]--����ָ�룬ָ��һ������10��Ԫ�ص�����

//int main()
//{
//	char* arr[5];//ָ������
//	char* (*pa)[5]=&arr;//����ָ�루�����ڴ��ָ���������
//	return 0;
//}


////��ӡ��ά����--���ַ���
////���������顢������ָ��

//void print1(int arr[3][5],int x,int y)//����������
//{
//	int i=0;
//	for(i=0;i<x;i++)
//	{
//		int j=0;
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}
//void print2(int (*p)[5],int x,int y)
//	//����Ϊ����ָ��p,�Ѷ�ά���鿴��һά���飬pָ���һ��Ԫ��==pָ���һ�У�
//{
//	int i=0;
//	for(i=0;i<x;i++)
//	{
//		int j=0;
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",*(*(p+i)+j));
//			printf("%d ",*(p[i]+j));
//			printf("%d ",(*(p+i))[j]);
//			printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	//print1(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}


//���鴫��
//void print(int* arr)
//{}
//int main()
//{
//	int arr[10]={0};
//	print(arr);
//	return 0;
//}

//��ά���鴫��
//void print(int (*arr)[5],int x,int y)//arrΪ��Ԫ�ص�ַ����ά�������ǵ�һ�������ָ��
//{}
//int main()
//{
//	int arr[3][5]={0};
//	print(arr,3,5);
//	return 0;
//}

//һ��ָ�봫��
//void test1(int* p)
//{}
//int main()
//{
//	int a=2;
//	int* pa=&a;
//	test1(pa);
//	test1(&a);
//	return 0;
//}

//����ָ�봫��
//void test(int** p)
//{}
//int main()
//{
//	int a=10;
//	int* p=&a;
//	int**pp=&p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//void test(int** p)
//{}
//int main()
//{
//	int* p1;
//	int** p2=&p1;
//	test(p2);
//	test(&p1);
//	return 0;
//}
//&�������ͺ����� ���Ǻ����ĵ�ַ
//����ָ��--���� ��*ָ������������������=������
//int add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	int arr[10]={0};
//	int (*p)[10]=&arr;
//	int (*pa)(int,int)=add;
//	printf("%d\n",(*pa)(2,3));
//	printf("%d\n",pa(2,3));
//	printf("%d\n",(**pa)(2,3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s",str);
//}
//int main()
//{
//	//�޷���ֵ�ĺ�����ָ��--void (*ָ����)���������ͣ�=��������
//	void (*p)(char*)=Print;
//	(*p)("hello");
//	return 0;
//}

// (*(void(*)())0)()
//��0ǿ������ת���ɺ���ָ�����ͣ�*�����õ���0ָ��ָ��ĺ���������Ϊ����

// void(*signal(int,void(*)(int)))(int);==void (*)(int) signal(int,void(*)(int))(����������⣬����������д)
//signal��һ�������������ú�����������������һ������ΪInt���ͣ��ڶ�������Ϊ����ָ�����ͣ���ָ��ָ��ĺ�������Ϊint,����ֵΪvoid
//signal�����ķ���������һ������ָ�����ͣ���ָ��ָ��ĺ�������Ϊint,����ֵΪvoid.


//����ָ�������
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//int main()
//{
//	int* arr[5];
//	int (*pa)(int,int)=Add;//����ָ�룬ָ��paָ����Add,��������Ϊ����int,����ֵ����Ϊint
//	//��Ҫһ�����飬����ϱ��ĸ�������ָ��-����ָ�������
//	int (*parr[4])(int,int)={Add,Sub,Mul,Div};
//	int i=0;
//	//�ֱ�����ĸ�����
//	for(i=0;i<4;i++)
//	{
//		printf("%d ",parr[i](2,3));//5,-1,6,0
//	}
//	return 0;
//}


//дһ������ָ�룬��ָ���ܹ�ָ��my_strcpy
//дһ������ָ�����飬�������ܹ����4��my_strcpy�����ĵ�ַ
//char* my_strcpy(char* dest,const char* src)
//{}
//int main()
//{
//	char* (*p)(char*,const char*)=my_strcpy;//����ָ��
//	char* (*parr[4])(char*,const char*)={};//����ָ������
//}


//����ָ���������;--ת�Ʊ�
//������
//void menu()
//{
//	printf("******************\n");
//	printf("**1.Add****2.Sub**\n");
//	printf("**3.Mul****4.Div**\n");
//	printf("******5.Xor*******\n");
//	printf("******0.exit******\n");
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//int Xor(int x,int y)//�������Ϊ1����ͬΪ0
//{
//	return x^y;
//}
//
//int main()
//{
//	int input=0;
//	int x=0;
//	int y=0;
//	
//	int(*parr[])(int,int)={0,Add,Sub,Mul,Div,Xor};
//	do
//	{
//		menu();
//	printf("��ѡ��>");
//	scanf("%d",&input);
//	if(input>=1 && input<=5)
//	{
//		int ret=0;
//		printf("����������������>");
//		scanf("%d%d",&x,&y);
//	    ret=parr[input](x,y);
//		printf("%d\n",ret);
//	}
//	else if(input==0)
//	{
//		printf("�˳�\n");
//	}
//	else
//	{
//		printf("�������\n");
//	}
//		
//}while(input);
//	
//}



//void Calc(int (*pf)(int,int))//Calc()��������Ϊһ��ָ�룬��ָ��ָ��һ��������ͨ������calc����������ָ��ָ��ĺ���
//{
//	int x=0;
//	int y=0;
//	printf("������������������>");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{
//	int input=0;
//	int x=0;
//	int y=0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�����������������");
//			break;
//		
//		}
//	
//	}while(input);
//}


//���������
//int main()
//{
//	int x=4;
//	int y=9;
//	 int ret=0;
//	 ret=x^y;
//	 printf("%d\n",ret);
//	return 0;
//}


//ָ����ָ�������ָ��
//int Add(int x,int y)
//{
//	return x+y;
//}


//int main()
//{
//	int arr[5]={1,2,5,4,5};
//	int (*pa)[5]=&arr;//ָ��ָ�����飬��������5������
//	int* pb=arr;//ָ��ָ����Ԫ�ص�ַ
//	int i=0;
//	printf("%d",*(pa[1]));
//	//printf("%d",pb[1]);
//	//printf("%d",*(pb+2));
//	//printf("%d",*pb+2);
//	
//}


//�ص�����--һ��ͨ������ָ����õĺ���
//void print(char *str)
//{
//	printf("hehe:%s",str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//
//}