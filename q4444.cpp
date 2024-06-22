#include <iostream>
#include<string>
using namespace std;
struct Employee
{
	string empID;
	string empName;
	float OTfee;
	int OTHours[5];
};
Employee getEMP(Employee e)
{
	cout<<"Enter Employee ID:";
	cin>>e.empID;
	cout<<"Enter the name of the employee: ";
	cin>>e.empName;
	cout<<"Enter the overtime fees: ";
	cin>>e.OTfee;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the number of OT hours for Day "<<i+1<<endl;
		cin>>e.OTHours[i];
	}
	return e;
}
void calOTpayment(float OTfee,int OTHours[],int size)
{
	float total=0;
	for(int i=0;i<size;i++)
	{
		total=total+(OTfee+OTHours[i]);
	}
	cout<<"Total over time payment: "<<total<<endl;
}

int main()
{
	struct Employee Emp1,*Emp2;
	Emp1=getEMP(Emp1);
	calOTpayment(Emp1.OTfee,Emp1.OTHours,5);
		Emp2=&Emp1;
		(*Emp2).OTfee=600.00;
		cout<<"The new overtime fee is: "<<Emp1.OTfee<<endl;
	return 0;
}

