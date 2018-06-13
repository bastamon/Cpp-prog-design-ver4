#include<iostream>
using namespace std;
void fun();
void main()
{   fun();
     fun();
	 int i=5;
	 a=2;
	cout<<"i="<<i<<",a="<<a<<endl;
}
void fun()
{   static int a=1;
     int i=5;
     a++;
     i++;
     cout<<"i="<<i<<",a="<<a<<endl;
}
