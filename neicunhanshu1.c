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
//	strcpy(arr2,arr1);//strcpyֻ�ܿ���һ���ֽ�
//	return 0;
//}

//mencpy--���������ֽ�,�����ص����ڴ濽��
//memmove--�����ص��ڴ濽��
//memcmp--�Ƚ�
//memset--�ڴ�����

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
//	struct s arr1[]={{"����",20},{"����",18}};
//	struct s arr2[]={0};
//	my_memcpy(arr2,arr1,sizeof(arr1));
//	return 0;
//}


//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[10]={0};
//	int arr3[]={1,2,3,4,5,6,7,8,9,10};
//	//arr1�����ֿ�����arr2��--memcyp
//	//memcpy(arr2,arr1,sizeof(arr1));
//	memmove(arr3+2,arr3,20);
//	return 0;
//}


//int main()
//{
//	int arr1[]={1,2,3,4,5};//01 00 00 00 02 00 00 00 03 00 00 00 
//	int arr2[]={1,2,5,4,3};//01 00 00 00 02 00 00 00 05 00 00 00
//	int ret=memcmp(arr1,arr2,9);//8��byte=2��int;
//	printf("%d\n",ret);
//	return 0;
//}


//int main()
//{
//	//char arr[10]="0";
//	//memset(arr,'#',10);//��10���ֽ� ��#ռһ���ֽ�
//	int arr[10]={0};//arr40���ֽ�--00 00 00 00 00 00 00 00 00 00 ������������
//	memset(arr,1,10);//��10���ֽ�--01 01 01 01 01 01 01 01 01 01 00 00 00 ������
//	return 0;
//}



