#include<iostream>
using namespace std;
int grossSalary(int bs, int A)
{
	int Gross=bs+A;
}
int NetSalary(int Gross, int d)
{
   int netSalary=Gross-d;
}

int main()
{
	int basicSalary,Allowance,Deduction;
	int Gross,netSalary;
	float allowancePer, deductionPer;
	cout<<"Enter your Basic salary: "<<"\n";
	cin>>basicSalary;
	cout<<"Enter your Allowance percentage: "<<"\n";
	cin>>allowancePer;
	cout<<"Enter your Deduction percentage: "<<"\n";
	cin>>deductionPer;
	Allowance=basicSalary*(allowancePer/100);
	Deduction=Gross-basicSalary;
	cout<<"Gross salary"<<grossSalary (basicSalary,Allowance);
	cout<<"Net salary"<<NetSalary( Gross, Deduction);
	return 0;
	
}