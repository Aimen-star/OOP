#include<iostream>
using namespace std;
KiloMetersToMiles()
{
	float km, m;
	cout<<"Enter value in kilometers:"<<"\n";
	cin>>km;
	m=0.621*km;
	cout<<"Value in miles"<<m<<endl;
	
}
CelsiusToFahrenheit()
{
	float c,f;
	cout<<"Enter value in Fahrenheit: "<<"\n";
	cin>>c;
	f=(c*9/5)+32;
	cout<<"Value in Fahrenheit: "<<f<<endl;
}
SecondsIntoHoursAndMinute()
{
	int sec, hr, min,s;
	cout<<"Enter time in seconds: "<<endl;
	cin>>sec;
	hr=sec/3600;
	min=(sec%3600)/60;
	s=(sec%3600)%60;
	cout<<"time in hour "<<hr<<endl;
		cout<<"time in minutes "<<min<<endl;
			cout<<"time in seconds "<<s<<endl;
	
	
}
int main()
{
	int menu,ch;
	cout<<"-------MENU----"<<"\n";
	cout<<"1. Kilometers to miles"<<"\n";
	cout<<"2. Celsius to Fahrenheit"<<"\n";
	cout<<"3.Seconds into Hours, Minutes & Seconds "<<"\n";
	cout<<"Enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		KiloMetersToMiles();
		break;
		case 2:
			CelsiusToFahrenheit();
			break;
		case 3:
			SecondsIntoHoursAndMinute();
			break;
			default:
			cout<<"invalid"	;
	}
}