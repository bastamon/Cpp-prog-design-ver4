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
    cout<<x; //��x�������Ǵ����
    cout<<a.x<<endl;  //��ȷ
}
void main()
{
	A obja(5);
	A::f(obja);


}