#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>

//strcmp--不比字符串长度，比的是首字母顺序 a最小，z最大

//int my_strcmp(const char* dest,const char* src)
//{
//	//比较过程
//	while(*dest==*src)
//	{
//		if(*dest=='\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//  //return (*dest-*src);
//	if(*dest>*src)
//		return 1;
//	else 
//		return -1;
//}
//int main()
//{
//	char *p1="abcdef";//6
//	char *p2="sqwer";//5
//	int ret=my_strcmp(p1,p2);//-1  a<s 
//	printf("%d\n",ret);
//	return 0;
//}


//strncpy--部分拷贝
//int main()
//{
//	char arr1[10]="abcdef";
//	char arr2[]="bit";
//	strncpy(arr1,arr2,4);
//	printf("%s\n",arr1);
//	return 0;
//}


//strncat--部分追加
//int main()
//{
//	char arr1[30]="hello\0xxxxxxx";
//	char arr2[]="world";
//	strncat(arr1,arr2,4);
//	printf("%s\n",arr1);
//	return 0;
//}

//strncmp--部分字符比较
//int main()
//{
//	const char* p1="abcdef";
//	char* p2= "abcquer";
//	int ret=strncmp(p1,p2,4);
//	printf("%d\n",ret);
//	return 0;
//}


//strstr--查找字符串
char* my_strstr(const char*p1,const char*p2)
{
	char *s1=p1;
	char *s2=p2;
	if(*p2=='\0')
	{
		return p1;
	}
	while(*p1)
	{
		while((*p2!='\0') && (*p2!='\0')&& (*p1==*p2))
		{
			p1++;
			p2++;
		}
		p1++;
	}
}
int main()
{
	char *p1="abcdef";
	char *p2="def";
	char *ret=strstr(p1,p2);
	if(ret==NULL)
		printf("子串不存在\n");
	else
		printf("%s\n",ret);
	return 0;
}

