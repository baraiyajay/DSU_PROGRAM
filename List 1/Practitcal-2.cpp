#include<iostream>
#include<iomanip>
using namespace std;
class temp
{
	private:
		float f,c;
	public:
		void getdata()
		{
			cout<<"Enter Ferenhiet ::";
			cin>>f;
		}
		
		void putdata()
		{
			c = (f-32)*5/9;	
			cout<<"The Celcius Temprature is ::"<<setprecision(4)<<c;
		}
};

int main()
{
	cout<<"Jay Baraiya"<<endl;
	cout<<"220130318067"<<endl;
	temp t;
	t.getdata();
	t.putdata();
}

