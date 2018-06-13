//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;
class Point	//Point类声明
{
public:
	Point(int xx=0, int yy=0) 
	{
		X=xx;Y=yy;
	//cout<<"Point构造函数被调用"<<endl;
	}
	Point(Point &p);
	int GetX() {return X;}
	int GetY() {return Y;}
	//~Point()	{cout<<"Point析构函数被调用"<<endl;}
private:
	int X,Y;
};
Point::Point(Point &p)	//拷贝构造函数的实现
{
	X=p.X;
	Y=p.Y;
	cout<<"Point拷贝构造函数被调用"<<endl;
}
//类的组合
class Line	//Line类的声明
{
public:	//外部接口
	Line(int x1,int y1,int x2,int y2);
	Line (Point xp1, Point xp2);
	/*Line (Point xp1, int x2,int y2):p1(xp1),p2(x2,y2)
	{
		cout<<"混合参数"<<endl;
		double x=double(p1.GetX()-x2);
		double y=double(p1.GetY()-y2);
		len=sqrt(x*x+y*y);
	}*/
	Line (Line &);
	double GetLen(){return len;}
//	~Line(){cout<<"Line析构函数被调用"<<endl;}
private:	//私有数据成员
	Point p1,p2;	//Point类的对象p1,p2
	double len;	
};

//组合类的构造函数
Line:: Line(int x1,int y1,int x2,int y2)
:p1(x1,y1),p2(x2,y2)
{
	cout<<"Line构造函数被调用int"<<endl;
	double x=double(x1-x2);
	double y=double(y1-y2);
	len=sqrt(x*x+y*y);	
}
Line:: Line (Point xp1, Point xp2)
:p1(xp1),p2(xp2)
{
	cout<<"Line构造函数被调用point"<<endl;
	double x=double(p1.GetX()-p2.GetX());
	double y=double(p1.GetY()-p2.GetY());
	len=sqrt(x*x+y*y);
}

//组合类的拷贝构造函数
Line:: Line (Line &Seg): p1(Seg.p1), p2(Seg.p2)
{
	cout<<"Line拷贝构造函数被调用"<<endl;
	len=Seg.len;
}

//主函数
void main()
{
	Point myp1(1,1),myp2(4,5);	//建立Point类的对象
	Line line(myp1,myp2);	//建立Line类的对象
	Line line1(1,1,4,5);
	Line line2(line);	//利用拷贝构造函数建立一个新对象

	cout<<"The length of the line is:";
	cout<<line.GetLen()<<endl;
	cout<<"The length of the line1 is:";
	cout<<line1.GetLen()<<endl;
	cout<<"The length of the line2 is:";
	cout<<line2.GetLen()<<endl;
	/*Line line3(myp1,4,5);
	cout<<"The length of the line3 is:";
	cout<<line3.GetLen()<<endl;*/
}
