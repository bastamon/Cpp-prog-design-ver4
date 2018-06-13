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
	int i, sum(0);  //声明变量i并初始化为1，声明变量sum并初始化为0
	cin>>i;
	while(i<=10)
	{
		sum+=i;
		i++;
	}
	cout<<"sum="<<sum<<endl;
}

