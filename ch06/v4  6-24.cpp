#include <iostream>
#include<string>
using namespace std;
void main (void)
{	
	int  i;
	for (i = 0; i < 2; i++)
	{ 
		string city,state;
	
		getline(cin,city,',');
		getline(cin,state);
		cout<<"City: "<<city<<"   State: "    <<state<<endl;
	}
}
