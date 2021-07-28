#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<assert.h>
//F5--启动调试-和F9配合使用--F9打断点后，F5可直接执行到断点处
//F9--设置/切换断点
//F10--逐过程，不进入函数内部
//F11--逐语句，每次都执行一条语句，可进入函数内部
//shift+F11--跳出函数
//shift+F9--快速监视


//int main()
//{
//	int i=0;
//	for(i=0;i<100;i++)
//	{
//		printf("%d  ",i);
//	}
//	for(i=0;i<100;i++)
//	{
//		printf("%d  ",10-i);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int i=0;
//	for(i=0;i<100;i++)
//	{
//		printf("%d  ",i);
//	}
//	system("pause");
//	return 0;
//}

//int add(int x,int y)
//{
//	return x+y;
//}
//int main()6
//{
//	int a=10;
//	int b=20;
//	int c=add(a,b);
//	return 0;
//}
/*nt main()
{
	int arr[10]={0};
	int i=0;
	for(i=0;i<10;i++)
	{
		arr[i]=i;
	}
	return 0;
}*/

//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//int main()
//{
//	int i=0;
//	int sum=0;
//	int n=0;
//	int ret=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int j=0;
//		ret=1;
//		for(j=1;j<=i;j++)
//		{
//			ret *= j;
//		}
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//函数实现strcpy功能
//void my_strcpy(char* arr1,char*arr2)
//{
//	while(*arr2!='\0')
//	{
//		*arr1=*arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1=*arr2;
//}
//char* my_strcpy(char* dest,const char* src)//const 放的位置不同 限制不同
//{
//	char* ret=dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[]="##########";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	/*printf("%s\n",arr1);
//	printf("%s\n",arr2);*/
//	printf("%s",my_strcpy(arr1,arr2));
//	return 0;
//}