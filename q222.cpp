#include <iostream>
using namespace std;
int main()
{
	int num,original,digit,sum=0;
	cout<<"Enter a number: ";
	cin>>num;
	original=num;
	
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	if(original%sum==0)
	{
		cout<<"The number is a niven number";
	}
	else
	{
		cout<<"The number is not a niven number ";
	}
	
	
	return 0;
}
