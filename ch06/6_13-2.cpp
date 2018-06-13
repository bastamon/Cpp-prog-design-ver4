//6_13.cpp
#include <iostream>
using namespace std;
class Point	//类的声明
{
public:	//外部接口
	Point(int xx=0, int yy=0, int tt=0) {X=xx;Y=yy;t=tt;}	//构造函数
	int GetX() {return X;}	//内联函数，返回X
	int GetY() {return Y;}	//内联函数，返回Y
	int t;
private:	//私有数据
	int X,Y;
};

void main()	//主函数
{
	Point A(4,5);	//声明对象A
	Point *p1=&A;	//声明对象指针并初始化
	int Point::*pt;
	pt=Point::&t;
	int (Point::*p_GetX)()=&Point::GetX;	//声明成员函数指针并初始化

	cout<<&(Point::GetX)<<endl;
	cout<<&p_GetX<<endl;

	cout<<A.t<<endl;
	cout<<A.*pt<<endl;
	cout<<p1->t<<endl;
	cout<<p1->*pt<<endl;

	cout<<(A.*p_GetX)()<<endl;	//（1）使用成员函数指针访问成员函数
	cout<<(p1->GetX)()<<endl;	//（2）使用对象指针访问成员函数
	cout<<A.GetX()<<endl; 	//（3）使用对象名访问成员函数
	cout<<(p1->*p_GetX)()<<endl;	//（4）使用对象指针和成员函数指针访问成员函数
}
