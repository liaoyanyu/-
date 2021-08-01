#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
//qsort(void*base,int sz,int width,int (*cmp)(const void*e1,const void*e2 ))�������������������͵����������������顢���������顢�ṹ��
//qsort����ԭ����ð����������ֱ�ֱ����qsort��������ð�ݷ�������qsort����





//qsort������������������test1()
int cmp_int(const void*e1,const void*e2)
{
	return *(int*)e1-*(int*)e2;
}
void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int width=sizeof(arr[0]);
	qsort(arr,sz,width,cmp_int);
}

//qsort��������������������test2()
int cmp_float(const void*e1,const void*e2)
{
	if(*(float*)e1>*(float*)e2)
		return 1;
	else if(*(float*)e1==*(float*)e2)
		return 0;
	else
		return -1;
}
void test2()
{
	float arr[5]={9.9 ,9.8 ,9.7 ,9.6 ,9.5};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int width=sizeof(arr[0]);
	qsort(arr,sz,width,cmp_float);
}

//qsort�������ṹ��������test3()
struct Stu 
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void*e1,const void*e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void*e1,const void*e2)//���ÿ⺯��strcmp
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);	
}
void test3()
{
	struct Stu s1[3]={{"����",32},{"����",27},{"����",4}};
	int sz=sizeof(s1)/sizeof(s1[0]);
	int width=sizeof(s1[0]);
	//qsort(s1,sz,width,cmp_stu_by_age);
	qsort(s1,sz,width,cmp_stu_by_name);
}


void Swap(char*buf1,char*buf2,int width)
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
void bobble_sort(void*base,int sz,int width,int (*cmp)(const void*e1,const void*e2))
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{//base������Ԫ�رȽϴ�С��������δ֪����ָ���cmp�����Ƚ�
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{//������������
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
				
			}
		}
	}
}
//��дbubble_sort����������������������
void test4()
{
	int arr[10]={9,7,8,4,3,5,2,1,0,6};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int width=sizeof(arr[0]);
	bobble_sort(arr,sz,width,cmp_int);

}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}