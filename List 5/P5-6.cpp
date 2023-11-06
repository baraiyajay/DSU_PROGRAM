#include<iostream>
using namespace std;
class animal
{
	public:
	eat()
	{
		cout<<"Eating ..... :)";
	}
};
class dog : public animal
{
	public:
	eat()
	{
		cout<<"Dog Eating Bread :)";
	}
};
int main()
{
		cout<<"Jay Baraiya"<<endl;
	    cout<<"220130318067"<<endl;
	dog d=dog();
	d.eat();
	
	return 0;
}
