#include<iostream>
using namespace std;
int main()
{
	int p,r,t,si;
	cout<<"Jay Baraiya"<<endl;
	cout<<"220130318067"<<endl;
	cout<<"Enter Principle Amount ::";
	cin>>p;
	cout<<"Enter Rate of Interest ::";
	cin>>r;
	cout<<"Enter Time (In Terms of years) ::";
	cin>>t;
	
	
	si=(p*r*t)/100;
	
	cout<<"The Simple Interest is ::"<<si<<" RS.";
	
	return 0;
}
