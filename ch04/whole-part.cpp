#include <iostream>
using namespace std;
class Part  //部件类
{
    public:
        Part(){val=0;cout<<"Calling Part constructor()"<<endl;}
        Part(int i); 
		Part(Part &p)
		{
			val=p.val; cout<<"Calling  Part copy constructor"<<endl;
		} //复制构造函数
        ~Part(){cout<<"Calling  Part destructor"<<endl;}
        void Print();
  	private: 
		int val; 
        
};
class Whole 
{
    public:
	   Whole();   
       Whole(int i,int j,int k);
	   Whole(Part &p1,Part &p2,int d); //复制构造函数
	   Whole(Whole &w);     //复制构造函数
       ~Whole(){cout<<"Calling  Whole destructor"<<endl; };
       void Printw();
    private:
       Part one;
       Part two;
       int date;
};
Part:: Part(int i)
{
	val=i;
    cout<<"Calling Part constructor(int)"<<endl;
}
void Part::Print()
{
	cout<<"call Part print："<<"val="<<val<<endl;
}
Whole::Whole()  //无参构造函数实现
{
  date=0;
  cout<<"Calling Whole constructor()"<<endl;
}
Whole::Whole(int i,int j,int k):
            two(i),one(j)  //有参构造函数实现
{
	date=k;
    cout<<"Calling Whole constructor(int)"<<endl;
}
Whole::Whole(Part &p1,Part &p2,int d):one(p1),two(p2) //有参构造函数实现
{
	date=d;
	cout<<"Calling Whole constructou(Part copy constructor)"<<endl;
}
Whole:: Whole(Whole &w):one(w.one),two(w.two) //复制构造函数
{
	date=w.date;
	cout<<"Calling Whole copy constructor"<<endl;
}
void  Whole::Printw()
{
	cout<<"call Whole printw："<<"date="<<date<<endl;
	cout<<"one:";
	one.Print();
	cout<<"two:";
	two.Print();
}
int main ()
{
	Part p1(1),p2(2);
	p1.Print();
	p2.Print();
	Part p3(p1);
    p3.Print();
	Whole w1(3,4,5);
	Whole w2(w1),w3(p1,p2,10);
	w1.Printw();
	w2.Printw();
	w3.Printw();
	return 0;
}

