#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

//strtok--�ֶ�ȡ�ַ���
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


//strerror--��������ת���ɶ�Ӧ�Ĵ�����Ϣ
//int main()
//{
//	//������--������Ϣ
//	//0--NO Error
//	//1--operation not permitted
//	//2--no such file of directory
//	//......
//	//errno--һ��ȫ�ֵĴ�����ı�������c���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ������errno��
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



//islower--�ж��Ƿ�ΪСд
//isdigit--�ж��Ƿ�Ϊ����
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


//tolower--�ַ�תСд��ĸ
//toupper
//int main()
//{
//	char ch=tolower('Q');
//	putchar(ch);
//	return 0;
//}


