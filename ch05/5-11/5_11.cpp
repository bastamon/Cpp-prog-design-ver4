//5_11.cpp
#include "account.h"
#include<iostream>
using namespace std;
int main()
{
	SavingsAccount sa0(1,21325302,0.015);
	SavingsAccount sa1(1,58320212,0.015);

	sa0.deposit(5,5000);
	sa1.deposit(25,10000);
	sa0.deposit(45,5500);
	sa1.withdraw(60,4000);

	sa0.settle(90);
	sa1.settle(90);

	sa0.show();cout<<endl;
	sa1.show();cout<<endl;
	cout<<"Total:"<<SavingsAccount::getTotal()<<endl;
	return 0;
}
 

