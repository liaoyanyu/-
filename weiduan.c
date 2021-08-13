#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>
#include<stddef.h>


//位段--二进制位,每次开辟一个字节存储，不够再重新开辟一个字节
//struct S 
//{
//	int a:2;//2表示a仅需要2个bit位就够了
//	int b:5;//b需要5个bit 位
//	int c:10;//c需要10个bit位
//	int d:30;//d需要30个bit位
//	//共占47个bit位，47/8---6个byte;
//	//开辟4个字节，2+5+10=17,32-17=15,不够存储d 30bit,只能新开辟4个byte=32bit,共8个字节
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));
//	return 0;
//}




//struct S//  开辟三个字节，每个字节从右地位向左使用
//{
//	char a:3;//000
//	char b:4;//0000
//	char c:5;//00000
//	char d:4;//0000
//	//内存中为--第一字节--0 0000 000--a占3个，b占4个,剩余1个闲置
//	//内存中为--第二字节--000 00000--c占5个，剩余三个不够存放d，闲置，开辟下一字节
//	//内存中为--第三字节--0000 0000--d占4个，剩余4个闲置
//	//内存占三个字节--b4个bit a3个bit 000 c5个bit 0000 d4个bit
//	// 0bbbb aaa 000 ccccc 0000 dddd
//};
//int main()
//{
//	struct S s={0};
//	s.a=10;//1010--4个bit位，a只能存三个--010
//	s.b=20;//10100--b存四个bit-----------0100
//	s.c=3;//011--c占6个bit,不够补0-------00011
//	s.d=4;//100--d占4个bit,不够补0-------0100
//	//内存中存储为--0 0100 010 000 00011 0000 0100
//	//换成8进制位--每四个二进制位=一个八进制位
//	//0010 0010 0000 0011 0000 0100
//	//八进制位s的内存=2 2 0 3 0 4
//	return 0;
//}