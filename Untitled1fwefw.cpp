#include <iostream>
using namespace std;
int main()
{
	int num,num1=1;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<num1<<" ";
		}
		cout<<endl;
		num1=num1+2;
	}
	return 0;
}
