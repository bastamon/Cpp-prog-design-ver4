#include <iostream>
#include "stdio.h"
using namespace std;
void print(); //��������
void main()  //������
{	 int i;
	char s[80]; //�����ַ�����
	 print( );     //����print����
	cout<<"What's your name?\n";//����ַ���
	cin>>s;	//����s
	cout<<"How old are you?\n"; //����ַ���
	cin>>i;	//����i
	cout<<s<<" is "<<i<<" years old.";
}
void print( )  //print����ʵ��
{
	printf("printf is also can be used\n");
}

