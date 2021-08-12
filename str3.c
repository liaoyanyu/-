#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//strtok--分段取字符串
//int main()
//{
//	char arr[]="zpw@bitedu.tech";
//	char*p="@.";
//	char*ret=NULL;
//	char buf[1024]={0};
//	strcpy(buf,arr);
//
//	for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	/*printf("%s\n",ret);
//
//	ret=strtok(NULL,p);
//	printf("%s\n",ret);
//
//	ret=strtok(NULL,p);
//	printf("%s\n",ret);
//*/
//	return 0;
//}


//strerror--将错误码转换成对应的错误信息
//int main()
//{
//	//错误码--错误信息
//	//0--NO Error
//	//1--operation not permitted
//	//2--no such file of directory
//	//......
//	//errno--一个全局的错误码的变量，当c语言的库函数在执行过程中发生了错误，就会把对应的错误码赋值到变量errno中
//	//char* str=strerror(errno);
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	//printf("%s\n",str);
//	return 0;
//}



//islower--判断是否为小写
//isdigit--判断是否为数字
//isupper
//int main()
//{
//	char ch='2';
//	int ret1=islower(ch);
//	int ret2=isdigit(ch);
//	printf("%d\n",ret2);
//
//	return 0;
//}


//tolower--字符转小写字母
//toupper
//int main()
//{
//	char ch=tolower('Q');
//	putchar(ch);
//	return 0;
//}


