#include<iostream>
using namespace std;
class A
{
	public:
		

		void getdata()
		{
			cout<<"Class A";	
		}
};
class B
{		public :
		void putdata()
		{
			cout<<"Class B";
		}
};
class C : public B, public A
{
};
int main()
{
		cout<<"Jay Baraiya"<<endl;
	    cout<<"220130318067"<<endl;
	C c;
	c.getdata();
	c.putdata();
	
	return 0;
		
} 
