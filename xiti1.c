#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<math.h>



//void reverse(char* str)
//{
//	
//	int len=strlen(str);//���Ȳ�������β0��
//	char* left=str;
//	char* right=str+len-1;
//
//	while(left<right)
//	{
//	char tmp=*left;
//	*left=*right;
//	*right=tmp;
//	left++;
//	right--;
//	}
//	
//}
//int main()
//{
//	char arr[256]={0};
//	//scanf("%s",arr);//abcdef\0  //scanf��ȡʱ�������ո�ֹͣ��ȡ
//	gets(arr);//��ȡһ�У��ɽ��տո�
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}



//int main()
//{
//	int a=0;
//	int n=0;
//	int i=0;
//	int sum=0;
//	int ret=0;
//	scanf("%d%d",&a,&n);//a=2,n=5,sum=2+22+222+2222+22222
//	for(i=0;i<n;i++)
//	{
//		ret=ret*10+a;
//		sum+=ret;		
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//��ӡ1-100000֮���ˮ�ɻ���--153=1^3+5^3+3^3��
//int main()
//{
//	int i=0;
//	for(i=0;i<100000;i++)
//	{
//		
//		int n=1;
//		int sum=0;
//		int tmp=i;
//		//����n  i=123--n=3
//		while(tmp/=10)
//		{
//			n++;//n=3
//		}
//		//����ÿλn�η�֮��sum
//		tmp=i;
//		while(tmp)
//		{
//			sum += pow(tmp%10,n);
//			tmp/=10;
//		}
//		
//		//�ж�i==sum
//		if(i==sum)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}

//��ӡ����
//      *         6���ո� 1��*  =0+1
//     ***        5��     3    =1+2
//    *****       4       5    =2+3
//   *******      3       7    =3+4
//  *********     2       9
// ***********    1       11
//*************   0       13

// ***********    1       11     
//  *********             9      
//   *******              7      =
//    *****               5      
//	   ***                3      =
//	    *          6      1      =

//int main()
//{
//	int line=0;
//	int i=0;
//	int j=0;
//	scanf("%d",&line);//line=7
//	//��ӡ�ϰ벿��
//	for(i=0;i<line;i++)
//	{
//		//��ӡ�ո�
//		for(j=0;j<line-i-1;j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0;j<i+i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");		
//	}
//	//��ӡ�°벿��
//	for(i=0;i<line-1;i++)//line=7
//	{
//		//��ӡ�ո�
//		for(j=0;j<=i;j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for(j=0;j<2*(line-i-1)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//ʵ����������������ż��ǰ��
//void print(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<right)
//	{
//		//�������ż��
//		while(arr[left]%2==1 && (left<right))
//		{
//			left++;
//		}
//		//���ұ�������
//		while(arr[right]%2==0 && (left<right))
//		{
//			right--;
//		}
//		if(left<right)
//		{
//			int tmp=arr[left];
//			arr[left]=arr[right];
//			arr[right]=tmp;
//		}
//	}
//}
//int main()
//{
//
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//1,3,5,7,9 
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0;
//}


