#include <iostream>
using namespace std;

int main()
{
	int num,num1=1;;
	cout<<"Enter a Number: ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
			
		}
		cout<<endl;
		num1=num1+1;
	}
	
	return 0;
}
