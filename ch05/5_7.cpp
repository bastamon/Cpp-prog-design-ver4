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
//���������βΣ��ں����в��ܸ���r�����õĶ�����˶�Ӧ��ʵ�β��ᱻ�ƻ���
void display( double& r)

{	   
	cout<<r<<endl;   
	r=17.9;
	cout<<r<<endl;   

 }
