#include  <iostream> 
using  namespace  std; 
void staticLocalVar() 
 {  
	static int a =0; // ������ʱ��ʼ��һ��,�´��ٵ���ʱ,�����г�ʼ������
	cout<<"a="<<a<<endl; 
	++a; 
} 
void fun(){ cout<<"a="<<a<<endl;}
int  main() 
{ 
 staticLocalVar(); // ��һ�ε���,  ���a=0 
 staticLocalVar();  // �ڶ��ε���,  �����˵�һ���˳�ʱ��ֵ, ���a=1  
 fun();
 return 0; 
} 
