#include <iostream>
using namespace std;

float CalculateInterest(float balance,float rate,int NoofWidth);
int main()
{
	int balance,NoofWidth;
	cout<<"Enter your Balance :";
	cin>>balance;
	cout<<"Enter your NoofWidth : ";
	cin>>NoofWidth;
	cout<<"Enter the rate : ";
	cin>>rate;
	
	float interest=CalculateInterest(balance,rate,NoofWidth);
	cout<<"The interest is :"<<interest;
	
	return 0;
	
}
float CalculateInterest(float balance,float rate,int NoofWidth)
{
	float interest;
	if(NoofWidth>5)
	{
		interest=0;
	}
	else
	{
		interest=balance*rate;
		return interest;
	}
}
