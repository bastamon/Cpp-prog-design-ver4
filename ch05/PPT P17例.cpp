#include <iostream>
using namespace std;
int i;  //��ȫ�������ռ��ȫ�ֱ���(�ֳ��ļ�������)

namespace Ns
{
    int j;    //��Ns�����ռ��е�ȫ�ֱ���
}
int main()
{
     i=5;			//Ϊȫ�ֱ���i��ֵ
     Ns::j=6;		//Ϊȫ�ֱ���j��ֵ
     {
       using namespace Ns;		//ʹ�õ�ǰ���п���ֱ������Ns�����ռ�ı�ʶ��
        int i;					//�ֲ�����
        i=7;
        cout<<"i="<<i<<endl;	//���7
        cout<<"j="<<j<<endl;	//���6
     }
       cout<<"i="<<i<<endl;
       return 0;
}
