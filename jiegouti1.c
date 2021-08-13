#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
#include<stddef.h>

//内置类型：char int short long float double
//自定义类型（复杂类型）--结构体、枚举、联合体

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性：名字、电话、性别
//struct/*结构体关键字*/stu //结构体标签
//{
//	//结构体成员变量
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;	
//}s3,s4;//全局变量s3.s4
//
//struct stu s2 //全局变量
//
//int main()
//{
//	//创建结构体类型变量s1
//	struct stu s1;//类型：struct stu
//	return 0;
//}


//匿名结构体类型
//struct
//{
//	char c;
//	int a;
//}x;      //匿名结构必须加变量名 否则无法创建
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
//	x=&px;//不能这样转换，两类型不同
//	return 0;
//}


//struct node
//{
//	int data;//数据域
//	//存放下一个结点的指针
//	struct node* next;//指针域
//	//struct node n;//不算递归，错误写法，结构体类型中不能包含自己结构体
//};
//int main()
//{
//	return 0;
//}


//typedef struct node
//{
//	int data;
//	struct node* next;
//}node;//定义类型名node
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
//	printf("%d\n",sizeof(struct s3));//最大对齐数是8
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


//修改默认对齐数
//#pragma pack(4)//设置默认对齐数为4
//struct S
//{
//	char c1;//1
//	double d;//对齐数4 内存8
//};
//#pragma pack()//取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//1+3+8=12=4*3
//	return 0;
//}

//offsetof()--计算结构体成员相对于0的偏移量--不是函数 是宏，参数可传类型
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


//结构体传参--传址 指针->成员变量名
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
//	print2(&s);//结构体内存过大，传指针
//	/*s.a=100;
//	s.c='w';
//	s.d=3.14;*/
//	//printf("%d\n",s.a);
//	return 0;
//}





