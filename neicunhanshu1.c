#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[5]={0};
//	strcpy(arr2,arr1);//strcpy只能拷贝一个字节
//	return 0;
//}

//mencpy--拷贝部分字节,处理不重叠的内存拷贝
//memmove--处理重叠内存拷贝
//memcmp--比较
//memset--内存设置

//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[5]={0};
//	memcpy(arr2,arr1,sizeof(arr1));
//	return 0;
//}

//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret=dest;
//	while(num--)
//	{
//		*(char*)dest=*(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//struct s
//{
////	char name[20];
//	int age;
//};
//int main()
//{
//	struct s arr1[]={{"张三",20},{"李四",18}};
//	struct s arr2[]={0};
//	my_memcpy(arr2,arr1,sizeof(arr1));
//	return 0;
//}


//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[10]={0};
//	int arr3[]={1,2,3,4,5,6,7,8,9,10};
//	//arr1中数字拷贝到arr2中--memcyp
//	//memcpy(arr2,arr1,sizeof(arr1));
//	memmove(arr3+2,arr3,20);
//	return 0;
//}


//int main()
//{
//	int arr1[]={1,2,3,4,5};//01 00 00 00 02 00 00 00 03 00 00 00 
//	int arr2[]={1,2,5,4,3};//01 00 00 00 02 00 00 00 05 00 00 00
//	int ret=memcmp(arr1,arr2,9);//8个byte=2个int;
//	printf("%d\n",ret);
//	return 0;
//}


//int main()
//{
//	//char arr[10]="0";
//	//memset(arr,'#',10);//放10个字节 ，#占一个字节
//	int arr[10]={0};//arr40个字节--00 00 00 00 00 00 00 00 00 00 ······
//	memset(arr,1,10);//放10个字节--01 01 01 01 01 01 01 01 01 01 00 00 00 ···
//	return 0;
//}



