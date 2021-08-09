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
//	unsigned int a=0x1234;//a内存中占4个byte
//	//a=0x 00 00 12 34
//	//a大端存储=0x 00 00 12 34
//	//a小端存储=0x 34 12 00 00
//	//16进制34==10进制52;
//	unsigned char b=*(unsigned char *)&a;
//	//&a是整型a的地址，4个byte,强制类型转换为char*,1个byte,*解引用仅访问一个byte的内容
//	printf("%d\n",b);//仅访问1个byte,b=
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//1 暴力求解法
//void left_move1(char* arr,int k)
//{
//	int i=0;
//	int len=strlen(arr);
//	
//	for(i=0;i<k;i++)
//	{
//		//左旋一个字符
//		int tmp=arr[0];
//		int j=0;
//		//后面的字符前移
//		for(j=1;j<=len-1;j++)
//		{
//			arr[j-1]=arr[j];
//		}
//
//		arr[len-1]=tmp;
//
//	}
//}

//2 三步翻转法
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
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
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

//追加字符串
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
//		printf("找到了\n");
//	}
//	else 
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}