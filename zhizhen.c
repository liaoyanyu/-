#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//һ���ڴ浥Ԫһ���ֽڣ�һ���ֽ�8��bitλ�������ĸ��ֽ�
//4GB�ڴ���ԣ�32����ַ�ߣ�ÿ����ַ�߿���ʾ0��1��������ɣ�����2^32����ַ����2^32���ڴ浥Ԫ
//2^32byte==2^32/1024KB==2^32/1024/1024MB==2^32/1024/1024/1024GB==4GB
//8GB�ڴ�==64����ַ��

//32λ�����ϣ�һ��ָ�����4���ֽ�
//64λ�����ϣ�һ��ָ�����8���ֽ�
//int main()
//{
//	//printf("%d\n",sizeof(char*));
//	int a=0x11223344;
//	int* pa=&a;
//	char* pc=&a;
//	//printf("%p\n",pa);
//	//printf("%p\n",pc);
//	return 0;
//}

//int main()
//{
//	int arr[10]={0};
//	//int* p=arr;
//	char* p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=1;
//	}
//	return 0;
//}

//int main()
//{
//	int a[10]={0};
//	int i=0;
//	int* p=a;
//	for(i=0;i<12;i++)//Ұָ��
//	{
//		*p=i;
//		p++;
//	}
//	return 0;
//}

//������� aΪ��ʱ���� ��������a�ռ�ʧȥ��pΪҰָ�룬���ʷǷ�
//int* test()
//{
//	int a=10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	printf("%d\n",*p);
//	return 0;
//}

//int main()
//{
//	int* p=NULL;//ָ�������ʼ������ָ�븳��ֵ
//	*p=10;
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int* p=&arr[9];
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",*p);
//		p--;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d",&arr[0]-&arr[9]);//ָ���ȥָ��õ������м�Ԫ�صĸ�����ֻ��ͬ����ָ������
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start=str;
//	char* end=str;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d",len);
//	return 0;
//}



//int main()
//{
//	int a=10;
//	int* pa=&a;
//	int** ppa=&pa;
//	printf("%d   %d",*pa,**ppa);
//}

//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={6,7,8,9,10};
//	int tmp=0;
//	int i=0;
//	int j=0;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(i==j)
//			{
//				tmp=arr1[i];
//				arr1[i]=arr2[j];
//				arr2[j]=tmp;
//			}
//		}
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d",arr1[i]);
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d",arr2[i]);
//	}
//
//	return 0;
//}

//��һ�����Ķ��������м���1

//int count_bit_one(int a)
//{
//	int b=1;
//	int i=0;
//	int count=0;
//	for(i=0;i<32;i++)
//	{
//		if((a&b)==1)
//			count++;
//		a=a>>1;
//	}
//	return count;
//}
//int main()
//{
//	int a=0;
//	int count=0;
//	scanf("%d",&a);	
//	count =count_bit_one(a);
//	printf("%d",count);
//	return 0;
//}

//�������Ķ�����λ���м�������ͬ
//int get_diff(int m,int n)
//{
//	int x=m^n;
//	int i=0;
//	int a=1;
//	int count=0;
//	
//	/*for(i=0;i<32;i++)
//	{
//		if((x&a)==1)
//			count++;
//		x=x>>1;
//	}*/
//	while(x)
//	{
//		x=x&(x-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m,n=0;
//	int count=0;
//	scanf("%d%d",&m,&n);	
//	count=get_diff(m,n);
//	printf("%d\n",count);
//	return 0;
//}

