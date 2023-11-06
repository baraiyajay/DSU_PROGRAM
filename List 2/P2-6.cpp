#include<iostream>
#include<iomanip>
using namespace std; 
int main()
{
	// function setfill 
	int a =10;
	cout<<"Jay Baraiya"<<endl;
	cout<<"220130318067"<<endl;
	cout<<"--------------------- "<<endl;
	cout<<"The value of A :   "<<setw(5)<<setfill('*')<<a;
	return 0;
}
