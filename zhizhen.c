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
//数组名就是首元素地址
//int main()
//{
//	int arr[3]={1,2,3};
//	int* p=arr;//数组名就是首元素地址
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


//指针数组--用来存放指针的数组
//int main()
//{
//	int arr[10]={0};//整型数组
//	char ch[4]={ 0 };//字符型数组
//	int* parr[4];//存放整型指针的数组
//	char* pch[5];//存放字符型指针的数组
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
//	int* parr[]={arr1,arr2,arr3};//指针数组，指针指向数组首元素地址
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

//数组指针--指向数组的指针--存放数组的地址
//整型指针--指向整型的指针--存放整型的地址
//字符指针--指向字符的指针--存放字符的地址
//int main()
//{
//	
//	//arr--首元素地址
//	//&arr[0]--首元素的地址
//	//&arr--数组的地址
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;//存储数组的地址//p为数组指针，指向整个数组，*不是解引用操作
//	return 0;
//}
//int *p1[10]--指针数组，存放指针的数组==int* p1[10];
//int (*p2)[10]--数组指针，指向一个包含10个元素的数组

//int main()
//{
//	char* arr[5];//指针数组
//	char* (*pa)[5]=&arr;//数组指针（数组内存放指针变量）；
//	return 0;
//}


////打印二维数组--两种方法
////参数是数组、参数是指针

//void print1(int arr[3][5],int x,int y)//参数是数组
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
//	//参数为数组指针p,把二维数组看做一维数组，p指向第一个元素==p指向第一行，
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


//数组传参
//void print(int* arr)
//{}
//int main()
//{
//	int arr[10]={0};
//	print(arr);
//	return 0;
//}

//二维数组传参
//void print(int (*arr)[5],int x,int y)//arr为首元素地址，二维数组中是第一行数组的指针
//{}
//int main()
//{
//	int arr[3][5]={0};
//	print(arr,3,5);
//	return 0;
//}

//一级指针传参
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

//二级指针传参
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
//&函数名和函数名 都是函数的地址
//函数指针--类型 （*指针名）（函数参数）=函数名
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
//	//无返回值的函数的指针--void (*指针名)（参数类型）=函数名；
//	void (*p)(char*)=Print;
//	(*p)("hello");
//	return 0;
//}

// (*(void(*)())0)()
//把0强制类型转换成函数指针类型，*解引用调用0指针指向的函数，参数为（）

// void(*signal(int,void(*)(int)))(int);==void (*)(int) signal(int,void(*)(int))(可以这样理解，但不能这样写)
//signal是一个函数声明，该函数有两个参数，第一个参数为Int类型，第二个参数为函数指针类型，该指针指向的函数参数为int,返回值为void
//signal函数的返回类型是一个函数指针类型，该指针指向的函数参数为int,返回值为void.


//函数指针的数组
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
//	int (*pa)(int,int)=Add;//函数指针，指针pa指向函数Add,函数参数为两个int,返回值类型为int
//	//需要一个数组，存放上边四个函数的指针-函数指针的数组
//	int (*parr[4])(int,int)={Add,Sub,Mul,Div};
//	int i=0;
//	//分别调用四个函数
//	for(i=0;i<4;i++)
//	{
//		printf("%d ",parr[i](2,3));//5,-1,6,0
//	}
//	return 0;
//}


//写一个函数指针，该指针能够指向my_strcpy
//写一个函数指针数组，该数组能够存放4个my_strcpy函数的地址
//char* my_strcpy(char* dest,const char* src)
//{}
//int main()
//{
//	char* (*p)(char*,const char*)=my_strcpy;//函数指针
//	char* (*parr[4])(char*,const char*)={};//函数指针数组
//}


//函数指针数组的用途--转移表
//计算器
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
//int Xor(int x,int y)//异或，相异为1，相同为0
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
//	printf("请选择：>");
//	scanf("%d",&input);
//	if(input>=1 && input<=5)
//	{
//		int ret=0;
//		printf("请输入两个参数：>");
//		scanf("%d%d",&x,&y);
//	    ret=parr[input](x,y);
//		printf("%d\n",ret);
//	}
//	else if(input==0)
//	{
//		printf("退出\n");
//	}
//	else
//	{
//		printf("输入错误\n");
//	}
//		
//}while(input);
//	
//}



//void Calc(int (*pf)(int,int))//Calc()函数参数为一个指针，该指针指向一个函数，通过调用calc函数，调用指针指向的函数
//{
//	int x=0;
//	int y=0;
//	printf("请输入两个操作数：>");
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
//		printf("请选择");
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
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入");
//			break;
//		
//		}
//	
//	}while(input);
//}


//异或有问题
//int main()
//{
//	int x=4;
//	int y=9;
//	 int ret=0;
//	 ret=x^y;
//	 printf("%d\n",ret);
//	return 0;
//}


//指向函数指针数组的指针
//int Add(int x,int y)
//{
//	return x+y;
//}


//int main()
//{
//	int arr[5]={1,2,5,4,5};
//	int (*pa)[5]=&arr;//指针指向数组，数组中有5个整型
//	int* pb=arr;//指针指向首元素地址
//	int i=0;
//	printf("%d",*(pa[1]));
//	//printf("%d",pb[1]);
//	//printf("%d",*(pb+2));
//	//printf("%d",*pb+2);
//	
//}


//回调函数--一个通过函数指针调用的函数
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