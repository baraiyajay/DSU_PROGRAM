#include<iostream>
using namespace std;
int main()
{
		int a,b,c;
		cout<<"Jay Baraiya"<<endl;
	    cout<<"220130318067"<<endl;
		cout<<"Enter A ::";
		cin>>a;
		cout<<"Enter B ::";
		cin>>b;
		cout<<"Enter C ::";
		cin>>c;
		
		if(a>b && a>c)
		{
			cout<<"A is Maximum ::"<<a;
		}
		else if(b>c)
		{
			cout<<"B is Maximum ::"<<b;
		}
		else
		{
			cout<<"C is Maximum ::"<<c;
		}
		
		return 0;
}
