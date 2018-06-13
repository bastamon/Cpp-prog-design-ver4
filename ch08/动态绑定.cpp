#include<iostream>
using namespace std;
class Point
{ public:
	 Point(double i, double j) {x=i; y=j;}
	 virtual double Area()  const{  return 0.0;}
  private:
	double x, y;
};
class Rectangle:public Point
{ public:
	 Rectangle(double i, double j, double k, double l);
	 virtual double Area() const  {return  w*h;}
  private:
	double w,h;
};
Rectangle::Rectangle(double i, double j, double k, double l) :Point(i,j)
{	w=k;  h=l; }
void fun(Point &s)
{	cout<<"Area="<<s.Area()<<endl;  }
void main()
{
	Rectangle rec(3.0, 5.2, 15.0, 25.0);
	fun(rec);
}


