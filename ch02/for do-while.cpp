//for do-while.cpp
#include <iostream.h>
//using namespace std;
int main()
{
	int i(1),a(0);
	for(;i<=5;i++)
	{
		do{
			i++;
			a++;
		}while (i<3);
		i++;
	}
	    cout <<a << ","<<i<< endl;
}

