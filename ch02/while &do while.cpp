/*
#include<iostream>
using namespace std;
void main()
{
	int i(1), sum(0);
	cin>>i;
	do  {
		sum+=i;
		i++;
	} while(i<=10);
		cout<<"sum="<<sum<<endl;
}
*/
#include<iostream>
using namespace std;
void main()
{
	int i, sum(0);  //��������i����ʼ��Ϊ1����������sum����ʼ��Ϊ0
	cin>>i;
	while(i<=10)
	{
		sum+=i;
		i++;
	}
	cout<<"sum="<<sum<<endl;
}

