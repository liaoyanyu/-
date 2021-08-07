#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//	int *ptr1=(int *)(&aa+1);//&数组名==属于两种特殊情况中，代表整个数组，+1，跳过整个数组
//	int *ptr2=(int *)(*(aa+1));//数组名+1==不属于特殊情况，数组名=首元素地址=二维数组第一行元素，+1指向第二行元素
//	printf("%d,%d",*(ptr1-1),*(ptr2-1));
//	return 0;
//}


//int main()
//{
//	char *a[]={"work","at","alibaba"};//a是指针数组，数组a中都是指针变量//将常量字符串首字母地址放入数组中
//	char**pa=a;//==char* *pa=a;//pa指向a首元素地址，a中都是char*型元素
//	pa++;//pa++跳过一个char* 元素，指向下一个元素‘at’的首元素地址
//	printf("%s\n",*pa);
//	return 0;
//}
//
//int main()
//{
//	char * c[]={"ENTER","NEW","POINT","FIRST"};//指针数组
//	char*  *cp[]={c+3,c+2,c+1,c};//指针数组
//	char** *cpp=cp;
//
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--*++cpp+3);//
//	printf("%s\n",*cpp[-2]+3);//
//	printf("%s\n",cpp[-1][-1]+1);//
//	return 0;
//}

