#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<assert.h>
//F5--��������-��F9���ʹ��--F9��ϵ��F5��ֱ��ִ�е��ϵ㴦
//F9--����/�л��ϵ�
//F10--����̣������뺯���ڲ�
//F11--����䣬ÿ�ζ�ִ��һ����䣬�ɽ��뺯���ڲ�
//shift+F11--��������
//shift+F9--���ټ���


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

//����ʵ��strcpy����
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
//char* my_strcpy(char* dest,const char* src)//const �ŵ�λ�ò�ͬ ���Ʋ�ͬ
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