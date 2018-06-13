#include <iostream>
using namespace std;
class B0	//声明基类B0
{ public:	//外部接口
	B0(int n)
	{ 
		nV=n;cout<<"B0 constuctor called!    "<<nV<<endl;
	}
	int nV;
	void fun(){cout<<"Member of B0"<<endl;}
};
class B1: virtual public B0	 
{  public:	
	B1(int a,int b) : B0(a) 
	{
		nV1=b; cout<<"B1 constuctor called!    "<<nV1<<endl;
	}
	int nV1 ;
};
class B2: virtual public B0	 
{  public:	
	B2(int a, int c) : B0(a) 
	{
		nV2=c; cout<<"B2 constuctor called!    "<<nV2<<endl;
	}
	int nV2;
};
class D1: public B2, public B1
{
public:	
	D1(int a,int b, int c) : B0(a), B1(a,b), B2(a,c)
	{
		cout<<"D1 constuctor called!    "<<endl;
	}
	int nVd;
	void fund()
	{
		cout<<"Member of D1"<<endl;
	}
};
void main()	
{
	D1 d1(1,2,3);	
	d1.nV=2;
	d1.fun();
}
