#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一个内存单元一个字节，一个字节8个bit位，整型四个字节
//4GB内存电脑：32根地址线，每根地址线可显示0或1的正负电荷，共有2^32个地址，即2^32个内存单元
//2^32byte==2^32/1024KB==2^32/1024/1024MB==2^32/1024/1024/1024GB==4GB
//8GB内存==64根地址线

//32位机器上，一个指针变量4个字节
//64位机器上，一个指针变量8个字节
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
//	for(i=0;i<12;i++)//野指针
//	{
//		*p=i;
//		p++;
//	}
//	return 0;
//}

//错误代码 a为临时变量 出函数后a空间失去，p为野指针，访问非法
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
//	int* p=NULL;//指针变量初始化，给指针赋空值
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
//	printf("%d",&arr[0]-&arr[9]);//指针减去指针得到的是中间元素的个数，只能同类型指针可相减
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

//求一个数的二进制中有几个1

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

//两个数的二进制位中有几个数不同
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

