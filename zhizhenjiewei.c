#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//	int *ptr1=(int *)(&aa+1);//&������==����������������У������������飬+1��������������
//	int *ptr2=(int *)(*(aa+1));//������+1==���������������������=��Ԫ�ص�ַ=��ά�����һ��Ԫ�أ�+1ָ��ڶ���Ԫ��
//	printf("%d,%d",*(ptr1-1),*(ptr2-1));
//	return 0;
//}


//int main()
//{
//	char *a[]={"work","at","alibaba"};//a��ָ�����飬����a�ж���ָ�����//�������ַ�������ĸ��ַ����������
//	char**pa=a;//==char* *pa=a;//paָ��a��Ԫ�ص�ַ��a�ж���char*��Ԫ��
//	pa++;//pa++����һ��char* Ԫ�أ�ָ����һ��Ԫ�ء�at������Ԫ�ص�ַ
//	printf("%s\n",*pa);
//	return 0;
//}
//
//int main()
//{
//	char * c[]={"ENTER","NEW","POINT","FIRST"};//ָ������
//	char*  *cp[]={c+3,c+2,c+1,c};//ָ������
//	char** *cpp=cp;
//
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--*++cpp+3);//
//	printf("%s\n",*cpp[-2]+3);//
//	printf("%s\n",cpp[-1][-1]+1);//
//	return 0;
//}

