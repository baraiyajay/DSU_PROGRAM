#include<iostream>
#include<iomanip>
using namespace std;
main()
{
		// function setw,stefill,endl,setprecision
	float km;
 		cout<<"Jay Baraiya"<<endl;
	cout<<"220130318067"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the Kilometer :  ";
	cin>>km;
	cout<<"Kilometer into Centimeter : "<<km*100000<<endl<<setprecision(5);
	cout<<"Kilometer into Meter      : "<<km*1000<<endl<<setprecision(5);
	cout<<"Kilometer into Inch       : "<<km*39370.1<<endl<<setprecision(5);;
	cout<<"Kilometer into Feet       : "<<km*3280.84<<endl<<setprecision(5);;
	return 0;
}

