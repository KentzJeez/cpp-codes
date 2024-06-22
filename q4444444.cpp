#include <iostream>
using namespace std;

struct Employee
{
	string EmpID;
	string EmpName;
	float OTFee;
	int OTHours[5];	
};

Employee getEmp(Employee e)
{
	cout<<"Enter Employee ID : ";
	cin>>e.EmpID;
	
	cout<<"Enter the Name of the Employee : ";
	cin>>e.EmpName;
	
	cout<<"Enter the overtime fees :";
	cin>>e.OTFee;
	
	
	for(int=0;i<5;i++)
	{
		cout<<"Enter the number of OT Hours for the dat : "<<i+1<< " : ";
		cin>>e.OTHours;
	}
	return e;
}

void calOTpayment(float fee,int arr[],int size)
{
	float total=0;
	for(int i=0;i<size;i++)
	{
		total=total+(fee*arr[i])
	}
	cout<<"Total over time payment : "<<total<<endl;
}
int main()
{
	struct Employee emp1;
	emp1=getEmp(emp1);
	calOTpayment(emp1.OTFee,emp1.OTHours,5);
	
	struct Employee emp1;
	ptr=&emp1;
	ptr->fee=600.0;
	cout<<"The new overtime fee is : "<<(*ptr).fee << endl;
	
	return 0;
}
