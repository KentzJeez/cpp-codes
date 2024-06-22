#include <iostream>
using namespace std;

void substraction(int x);
int sub(int x);

int main()
{
	substraction(100);
	cout<<endl;
	substraction(200);
	cout<<endl;
	
	int s=sub(20);
	cout<<s<<endl;
	cout<<sub(30)<<endl;
	
	return 0;
}

	void substraction(int x)
	{
	
		cout<<x-5;
	}
	int sub(int x)
	{
		cout<<"hiii"<<endl;
		return x-2;
	}


