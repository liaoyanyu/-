#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>


//int main()
//{
//	unsigned char a=200;
//	unsigned char b=100;
//	unsigned char c=0;
//	c=a+b;
//	printf("%d %d",a+b,c);
//	return 0;
//}

//int main()
//{
//	unsigned int a=0x1234;//a�ڴ���ռ4��byte
//	//a=0x 00 00 12 34
//	//a��˴洢=0x 00 00 12 34
//	//aС�˴洢=0x 34 12 00 00
//	//16����34==10����52;
//	unsigned char b=*(unsigned char *)&a;
//	//&a������a�ĵ�ַ��4��byte,ǿ������ת��Ϊchar*,1��byte,*�����ý�����һ��byte������
//	printf("%d\n",b);//������1��byte,b=
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//1 ������ⷨ
//void left_move1(char* arr,int k)
//{
//	int i=0;
//	int len=strlen(arr);
//	
//	for(i=0;i<k;i++)
//	{
//		//����һ���ַ�
//		int tmp=arr[0];
//		int j=0;
//		//������ַ�ǰ��
//		for(j=1;j<=len-1;j++)
//		{
//			arr[j-1]=arr[j];
//		}
//
//		arr[len-1]=tmp;
//
//	}
//}

//2 ������ת��
//abcdef
//ba fedc
//cdefab
//void reverse(char*left,char*right)
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while(left<right)
//	{
//		char tmp=*left;
//		*left = *right;
//		*right=tmp;
//		left++;
//		right--;
//	}
//	
//}
//void left_move2(char *arr,int k)
//{
//	int len=strlen(arr);
//	assert(arr);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//
//}
//int main()
//{
//	char arr[]={"abcdef"};
//	
//	//left_move1(arr,2);
//	left_move2(arr,2);
//
//	printf("%s\n",arr);
//	return 0;
//}

//׷���ַ���
//int main()
//{
//	char arr1[]={"abcd"};
//	char arr2[]={"efghijk"};
//	strcat(arr1,arr2);
//	strncat(arr1,arr2,3);
//	printf("%s\n",arr1);
//	return 0;
//}

//int FindNum(int arr[3][3],int k,int row,int col)
//{
//	int x=0;
//	int y=col-1;
//	while(x<=row-1 && y>=0)
//	{	
//		if(arr[x][y]==k)
//		{
//			return 1;
//		}
//		else if(arr[x][y]<k)
//		{
//			x++;
//		}
//		else
//		{
//			y--;
//		}
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int arr[3][3]={{1,2,3},{3,4,5},{5,6,7}};
//	int k=7;
//	int ret=FindNum(arr,k,3,3);
//	if(ret==1)
//	{
//		printf("�ҵ���\n");
//	}
//	else 
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}