#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
#include<stddef.h>

//�������ͣ�char int short long float double
//�Զ������ͣ��������ͣ�--�ṹ�塢ö�١�������

//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����ѧ�������ԣ����֡��绰���Ա�
//struct/*�ṹ��ؼ���*/stu //�ṹ���ǩ
//{
//	//�ṹ���Ա����
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;	
//}s3,s4;//ȫ�ֱ���s3.s4
//
//struct stu s2 //ȫ�ֱ���
//
//int main()
//{
//	//�����ṹ�����ͱ���s1
//	struct stu s1;//���ͣ�struct stu
//	return 0;
//}


//�����ṹ������
//struct
//{
//	char c;
//	int a;
//}x;      //�����ṹ����ӱ����� �����޷�����
//int main()
//{
//	struct x;
//	return 0;
//}
//
//
//struct
//{
//	int a;
//	char c;
//} * px;
//int main()
//{
//	x=&px;//��������ת���������Ͳ�ͬ
//	return 0;
//}


//struct node
//{
//	int data;//������
//	//�����һ������ָ��
//	struct node* next;//ָ����
//	//struct node n;//����ݹ飬����д�����ṹ�������в��ܰ����Լ��ṹ��
//};
//int main()
//{
//	return 0;
//}


//typedef struct node
//{
//	int data;
//	struct node* next;
//}node;//����������node
//int main()
//{
//	struct node n1;
//	node n2;
//}


//struct T
//{
//	double weight;//%lf
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s1={'c',100,3.14,"hello bit"};
//	struct S s1={'c',{55.6,30},100,3.14,"hello bit"};
//	printf("%c %lf %d %d %lf %s\n",s1.c,s1.st.weight,s1.st.age,s1.a,s1.d,s1.arr);
//}


//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct s2
//{
//	int a;
//	char c1;
//	char c2;
//};
//int main()
//{
//	struct s1 s1={0};
//	struct s2 s2={0};
//	printf("%d\n",sizeof(s1));
//	printf("%d\n",sizeof(s2));
//}

//struct s3 
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct s3));//����������8
//	return 0;
//}


//struct s4
//{
//	char c1;
//	struct s3;
//	double f;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct s4));
//	return 0;
//}


//�޸�Ĭ�϶�����
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char c1;//1
//	double d;//������4 �ڴ�8
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//1+3+8=12=4*3
//	return 0;
//}

//offsetof()--����ṹ���Ա�����0��ƫ����--���Ǻ��� �Ǻ꣬�����ɴ�����
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n",offsetof(struct s,c));
//	printf("%d\n",offsetof(struct s,i));
//	printf("%d\n",offsetof(struct s,d));
//	return 0;
//}


//�ṹ�崫��--��ַ ָ��->��Ա������
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* tmp)
//{
//	tmp->a=100;
//	tmp->c='w';
//	tmp->d=3.14;
//}
//void print1(struct S tmp)
//{
//	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
//}
//void print2(struct S* ps)
//{
//	printf("%d %c %lf\n",ps->a,ps->c,ps->d);
//}
//int main()
//{
//	struct S s;
//	Init(&s);
//	print1(s);
//	print2(&s);//�ṹ���ڴ���󣬴�ָ��
//	/*s.a=100;
//	s.c='w';
//	s.d=3.14;*/
//	//printf("%d\n",s.a);
//	return 0;
//}





