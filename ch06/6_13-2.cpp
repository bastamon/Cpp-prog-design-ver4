//6_13.cpp
#include <iostream>
using namespace std;
class Point	//�������
{
public:	//�ⲿ�ӿ�
	Point(int xx=0, int yy=0, int tt=0) {X=xx;Y=yy;t=tt;}	//���캯��
	int GetX() {return X;}	//��������������X
	int GetY() {return Y;}	//��������������Y
	int t;
private:	//˽������
	int X,Y;
};

void main()	//������
{
	Point A(4,5);	//��������A
	Point *p1=&A;	//��������ָ�벢��ʼ��
	int Point::*pt;
	pt=Point::&t;
	int (Point::*p_GetX)()=&Point::GetX;	//������Ա����ָ�벢��ʼ��

	cout<<&(Point::GetX)<<endl;
	cout<<&p_GetX<<endl;

	cout<<A.t<<endl;
	cout<<A.*pt<<endl;
	cout<<p1->t<<endl;
	cout<<p1->*pt<<endl;

	cout<<(A.*p_GetX)()<<endl;	//��1��ʹ�ó�Ա����ָ����ʳ�Ա����
	cout<<(p1->GetX)()<<endl;	//��2��ʹ�ö���ָ����ʳ�Ա����
	cout<<A.GetX()<<endl; 	//��3��ʹ�ö��������ʳ�Ա����
	cout<<(p1->*p_GetX)()<<endl;	//��4��ʹ�ö���ָ��ͳ�Ա����ָ����ʳ�Ա����
}
