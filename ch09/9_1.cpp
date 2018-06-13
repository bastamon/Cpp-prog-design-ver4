//9_1.cpp
#include<iostream>
using namespace std;
template<typename T>
T abs(T x)
{    return x<0?-x:x;    }

void main()
{  int n=-5;
    double d=-5.5;
    
    cout<<abs(d)<<endl;
	float X=3.0f;
	cout<<abs(n)<<endl;
	cout<<abs(X)<<endl;

}
