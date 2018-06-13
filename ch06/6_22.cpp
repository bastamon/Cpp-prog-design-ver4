//6_22.cpp
#include<iostream>
using namespace std;
void main()
{
	//1将整个字符串一次输入或输出
	char b[]="China";        cout<<b<<endl;
	//2逐个字符输入输出
	static char c[10]=
	{'I',' ','a','m',' ','a',' ','b','o','y'};  //一维字符数组的声明和初始化
	int i;
	for(i=0;i<10;i++)    //逐个输出字符数组的元素
			cout<<c[i];
	cout<<endl;
}
