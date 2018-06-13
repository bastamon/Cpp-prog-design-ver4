//4_4.cpp
#include <iostream>
#include <cmath>
using namespace std;
class Point	//Point������
{
public:
	Point(int xx=0, int yy=0) 
	{
		X=xx;Y=yy;
	//cout<<"Point���캯��������"<<endl;
	}
	Point(Point &p);
	int GetX() {return X;}
	int GetY() {return Y;}
	//~Point()	{cout<<"Point��������������"<<endl;}
private:
	int X,Y;
};
Point::Point(Point &p)	//�������캯����ʵ��
{
	X=p.X;
	Y=p.Y;
	cout<<"Point�������캯��������"<<endl;
}
//������
class Line	//Line�������
{
public:	//�ⲿ�ӿ�
	Line(int x1,int y1,int x2,int y2);
	Line (Point xp1, Point xp2);
	/*Line (Point xp1, int x2,int y2):p1(xp1),p2(x2,y2)
	{
		cout<<"��ϲ���"<<endl;
		double x=double(p1.GetX()-x2);
		double y=double(p1.GetY()-y2);
		len=sqrt(x*x+y*y);
	}*/
	Line (Line &);
	double GetLen(){return len;}
//	~Line(){cout<<"Line��������������"<<endl;}
private:	//˽�����ݳ�Ա
	Point p1,p2;	//Point��Ķ���p1,p2
	double len;	
};

//�����Ĺ��캯��
Line:: Line(int x1,int y1,int x2,int y2)
:p1(x1,y1),p2(x2,y2)
{
	cout<<"Line���캯��������int"<<endl;
	double x=double(x1-x2);
	double y=double(y1-y2);
	len=sqrt(x*x+y*y);	
}
Line:: Line (Point xp1, Point xp2)
:p1(xp1),p2(xp2)
{
	cout<<"Line���캯��������point"<<endl;
	double x=double(p1.GetX()-p2.GetX());
	double y=double(p1.GetY()-p2.GetY());
	len=sqrt(x*x+y*y);
}

//�����Ŀ������캯��
Line:: Line (Line &Seg): p1(Seg.p1), p2(Seg.p2)
{
	cout<<"Line�������캯��������"<<endl;
	len=Seg.len;
}

//������
void main()
{
	Point myp1(1,1),myp2(4,5);	//����Point��Ķ���
	Line line(myp1,myp2);	//����Line��Ķ���
	Line line1(1,1,4,5);
	Line line2(line);	//���ÿ������캯������һ���¶���

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
