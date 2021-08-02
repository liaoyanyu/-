#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<search.h>
//数组名就是首元素地址，但有两个情况例外：
//1、sizeof(数组名)--此时数组名不是首元素地址，而是代表整个数组的字节大小
//2、&数组名--此时数组名表示整个数组
//int main()
//{
	//int a[]={1,2,3,4};
	//printf("%d\n",sizeof(a));//16--整个数组
	//printf("%d\n",sizeof(a+0));//4--数组名是首元素地址
	//printf("%d\n",sizeof(*a));//4--首元素地址
	//printf("%d\n",sizeof(a+1));//4/8--首元素地址加一
	//printf("%d\n",sizeof(a[1]));//4--第二个元素
	//printf("%d\n",sizeof(&a));//4/8--&a取出数组地址，地址是指针变量，指针4/8个字节
	//printf("%d\n",sizeof(*&a));//16--&a取出数组地址，*解引用表示访问整个数组。
	//printf("%d\n",sizeof(&a+1));//4/8--&a取出数组地址，&a+1跳过整个数组，指向数组后面，但是仍是地址，指针4/8个字节
	//printf("%d\n",sizeof(&a[0]));//4/8--首元素地址
	//printf("%d\n",sizeof(&a[0]+1));//4/8--首元素地址加一
	


	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",sizeof(arr));//6-访问整个数组的字节大小，一个char一个字节
	//printf("%d\n",sizeof(arr+0));//4/8--数组名是首元素地址，指针+0还是指针
	//printf("%d\n",sizeof(*arr));//1--数组名是首元素地址，*首元素地址是取首元素值
	//printf("%d\n",sizeof(arr[1]));//1--第二个元素的值
	//printf("%d\n",sizeof(&arr));//4--取整个数组的地址，是指针
	//printf("%d\n",sizeof(&arr+1));//4/8--取整个数组的地址加一，扔是指针
	//printf("%d\n",sizeof(&arr[0]+1));//4/8--首元素地址加1，仍是指针


	//char arr[]={'a','b','c','d','e','f'};
	//printf("%d\n",strlen(arr));//求字符串长度，随机数，
	//printf("%d\n",strlen(arr+0));//首元素地址+0，随机数
	//printf("%d\n",strlen(*arr));//报错--取首元素值'a'==97作为地址，解引用 
	//printf("%d\n",strlen(arr[1]));//报错--‘b’==98,98作为地址，有错
	//printf("%d\n",strlen(&arr));//随机值，&arr代表整个数组
	//printf("%d\n",strlen(&arr+1));//随机值--
	//printf("%d\n",strlen(&arr[0]+1));//随机值
	/*return 0;
}*/



//int main()
//{
	//二维数组
	//int a[3][4]={0};
	//printf("%d\n",sizeof(a));//48
	//printf("%d\n",sizeof(a[0][0]));//4
	//printf("%d\n",sizeof(a[0]));//16
	//printf("%d\n",sizeof(a[0]+1));//4--a[0]没有单独放在（）内，a[0]是第一行的数组名，是首元素地址，则表示第一行第一个元素地址，并不表示第一行地址
	//printf("%d\n",sizeof(*(a[0]+1)));//4
	//printf("%d\n",sizeof(a+1));//4--a是第一行的地址--指针
	//printf("%d\n",sizeof(*(a+1)));//16--第二行的大小
	//printf("%d\n",sizeof(&a[0]+1));//4--指针指向第二行地址
	//printf("%d\n",sizeof(*a));//16--第一行
	//printf("%d\n",sizeof(a[3]));//16
	//char arr[]="abcdef";
	//printf("%d\n",sizeof(arr));//7-计算数组字节大小
	//printf("%d\n",sizeof(arr+0));//4/8--数组名是首元素地址，指针+0还是指针
	//printf("%d\n",sizeof(*arr));//1--数组名是首元素地址，*首元素地址是取首元素值
	//printf("%d\n",sizeof(arr[1]));//1--第二个元素的值
	//printf("%d\n",sizeof(&arr));//4/8--取整个数组的地址，是指针
	//printf("%d\n",sizeof(&arr+1));//4/8--跳过整个数组的地址加一，扔是指针
	//printf("%d\n",sizeof(&arr[0]+1));//4/8--首元素地址加1，仍是指针

	//printf("%d\n",strlen(arr));//6--字符串长度，不包含0；
	//printf("%d\n",strlen(arr+0));//6--首元素地址+0=首元素地址
	//printf("%d\n",strlen(*arr));//报错--取首元素值'a'==97作为地址，解引用 
	//printf("%d\n",strlen(arr[1]));//报错--‘b’==98,98作为地址，有错
	//printf("%d\n",strlen(&arr));//6，&arr是数组指针
	//printf("%d\n",strlen(&arr+1));//随机值
	//printf("%d\n",strlen(&arr[0]+1));//&arr[0]是‘a’的地址，加一是b的地址，b向后是5个字符

	//char *p="abcdef";
	//printf("%d\n",sizeof(p));//4-p是指针变量
	//printf("%d\n",sizeof(p+1));//4/8 --指针p+1是字符b的地址
	//printf("%d\n",sizeof(*p));//1--字符串第一个字符
	//printf("%d\n",sizeof(p[0]));//1--p[0]=*(p+0)=='a'
	//printf("%d\n",sizeof(&p));//4/8--二级指针，取整个数组的地址，是指针
	//printf("%d\n",sizeof(&p+1));//4/8--取整个数组的地址加一，扔是指针
	//printf("%d\n",sizeof(&p[0]+1));//4/8--首元素地址加1，仍是指针

	//printf("%d\n",strlen(p));//6
	//printf("%d\n",strlen(p+1));//5--指针p+1是字符b的地址
	//printf("%d\n",strlen(*p));//err--
	//printf("%d\n",strlen(p[0]));//err
	//printf("%d\n",strlen(&p));//随机值
	//printf("%d\n",strlen(&p+1));//随机值
	//printf("%d\n",strlen(&p[0]+1));//5
	/*return 0;
}*/

//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int *ptr=(int*)(&a+1);//&a是整个数组的指针，+1表示跳过整个数组，即20个字节，（int*）强制类型转换为一次条四个字节的指针
//	printf("%d,%d\n",*(a+1),*(ptr-1));//a是首元素地址，+1跳过4个字节，*访问2；ptr指向5后面，-1跳过四个字节，*访问5
//	return 0;
//}



//假设p的值为0x100000，已知结构体Test类型的变量大小是20个字节
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
//	printf("%p\n",p+0x1);//0x100014//p是二十个字节的指针，p+1跳过20个字节；0x1是16进制的1；20=16+4=十六进制14，
//	printf("%p\n",(unsigned long)p+0x1);//强制类型转换，十六进制p转换为长整型十进制1048576，p+1=1048577=十六进制100001，
//	printf("%p\n",(unsigned int*)p+0x1);//无符号整型指针对p强制类型转换，p+1跳过四个字节，地址直接加4==100004
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
//	int a[3][2]={(0,1),(2,3),(4,5)};//()是逗号表达式，式中将最后的内容赋给结果，a数组中仅存1,3,5
//	int *p;
//	p=a[0];//a是第一行地址，a[0]是第一行第一个元素地址
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