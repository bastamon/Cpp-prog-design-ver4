//5_7.cpp
#include<iostream>
using namespace std;
//void display(const double& r);
void display(  double& r);
void main()
{
	double d(9.5);
	display(d);
	d=10.7;
	display(d);
}

/*void display(const double& r)
{	   
	cout<<r<<endl;   
 	//r=17.9;
 	cout<<r<<endl;   

 }*/
//常引用做形参，在函数中不能更新r所引用的对象，因此对应的实参不会被破坏。
void display( double& r)

{	   
	cout<<r<<endl;   
	r=17.9;
	cout<<r<<endl;   

 }
