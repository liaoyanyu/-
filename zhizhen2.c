#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<search.h>
//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ�룻
//	int* (*p)[10]=&arr;
//	//����ָ��
//	//int (*pAdd)(int,int)=Add;//&AddҲ����
//	//int ret=(*pAdd)(2,3);
//	//int ret=pAdd(2,3);
//	//printf("%d\n",ret);
//	
//	//����ָ�������
//	int (*pAdds[5])(int,int);
//
//	//ָ����ָ�������ָ��
//	int (*(*ppAdds)[5])(int,int)=&pAdds;
//	return 0;
//}

//�ص�����//ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp;
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//	
//}
struct Stu 
{
	char name[20];
	int age;
};
//
//int cmp_int(const void *e1, const void *e2 )
//{
//	return *(int*)e1-*(int*)e2;
//}
//int cmp_float(const void *e1,const void *e2)
//{
//	if(*(float*)e1==*(float*)e2)
//		return 0;
//	else if(*(float*)e1>*(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//int cmp_stu_by_age(const void *e1,const void *e2)
//{
//	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void *e1,const void *e2)//�Ƚ����� ���Ƚ��ַ���������ֱ����=<>,Ӧ����strcmp�����Ƚ������ַ�������/����ĸ����
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);// ����ֵ-1,0,1
//}
//void test1()//������������
//{
//	int arr[10]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	qsort( arr, sz, sizeof(arr[0]), cmp_int );
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void test2()//��������������
//{
//	float f[]={9.0,8.0,7.0,6.0,5.0,4.0};
//	int sz=sizeof(f)/sizeof(f[0]);
//	int i=0;
//	qsort(f,sz,sizeof(f[0]),cmp_float);
//	for(i=0;i<sz;i++)
//	{
//		printf("%0.1f ",f[i]);
//	}
//}
//void test3()
//{
//	struct Stu s1[3]={{"����",18},{"����",19},{"����",20}};
//	int sz=sizeof(s1)/sizeof(s1[0]);
//	int i=0;
//	qsort(s1,sz,sizeof(s1[0]),cmp_stu_by_name);
//	/*for(i=0;i<sz;i++)
//	{
//		printf("% ",s1[i]);
//	}*/
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	
//	//bubble_sort(arr,sz);
//	//ð��������������������������������򲻿��� 
//	//qsort--�⺯��������
//	
//	return 0;
//}



//ͨ��ð������
int cmp_stu_by_age(const void *e1,const void *e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}
int cmp_int(void*e1,void*e2)
{
	return *(int*)e1-*(int*)e2;
}
void Swap(char* buf1,char* buf2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp=*buf1;
		*buf1=*buf2;
		*buf2=tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void*base,int sz,int width,int(*cmp)(void*e1,void*e2))
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			//����Ԫ�رȽϴ�С,��Ԫ������δ֪���贫������Ԫ�ص�ַ����cmp�����Ƚ�
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//���� Swap����ʵ��
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}
void test4()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}
void test5()
{
	struct Stu s1[3]={{"����",19},{"����",18},{"����",3}};
	int sz=sizeof(s1)/sizeof(s1[0]);
	bubble_sort(s1,sz,sizeof(s1[0]),cmp_stu_by_age);
}
int main()
{
	//test4();
	test5();
	return 0;
}
