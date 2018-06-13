#include <iostream>
using namespace std;
class A
{
    public:
        static void f(A a);
		A(){}
		A(int i){x=i;}
    private:
        int x;
};
void A::f(A a)
{
    cout<<x; //对x的引用是错误的
    cout<<a.x<<endl;  //正确
}
void main()
{
	A obja(5);
	A::f(obja);


}