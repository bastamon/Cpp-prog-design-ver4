#include <iostream>
#include "stdio.h"
using namespace std;
void print(); //函数声明
void main()  //主函数
{	 int i;
	char s[80]; //声明字符数组
	 print( );     //调用print函数
	cout<<"What's your name?\n";//输出字符串
	cin>>s;	//输入s
	cout<<"How old are you?\n"; //输出字符串
	cin>>i;	//输入i
	cout<<s<<" is "<<i<<" years old.";
}
void print( )  //print函数实现
{
	printf("printf is also can be used\n");
}

