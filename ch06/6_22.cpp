//6_22.cpp
#include<iostream>
using namespace std;
void main()
{
	//1�������ַ���һ����������
	char b[]="China";        cout<<b<<endl;
	//2����ַ��������
	static char c[10]=
	{'I',' ','a','m',' ','a',' ','b','o','y'};  //һά�ַ�����������ͳ�ʼ��
	int i;
	for(i=0;i<10;i++)    //�������ַ������Ԫ��
			cout<<c[i];
	cout<<endl;
}
