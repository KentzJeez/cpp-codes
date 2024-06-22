#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() 
{
    string item;
    int quantity;
    float total=0,discount;
    char dec;
    do
    {
    	cout<<"Enter the Food item:  ";
   		 cin>>item;
    	cout<<"Enter the number of Items Needed: ";
    	cin>>quantity;
    if(item=="AKO12")
    {
    	discount=120*0.02;
		total=total+((120-discount)*quantity);
	}
	else if(item=="AKO13")
    {
    	discount=350*0.03;
		total=total+((350-discount)*quantity);
	}
	else if(item=="AKO14")
    {
    	discount=350*0.03;
		total=total+((350-discount)*quantity);
	}
	else if(item=="AKO15")
    {
    	discount=250*0.05;
		total=total+((250-discount)*quantity);
	}
	else
	{
		cout<<"Invalid Food Item"<<endl;
	}
	cout<<"Do you have more data? ";
	cin>>dec;
	}
	while(dec=='Y' || dec=='y');
	if(dec=='N' || dec=='n')
	{
		cout<<"Total Price is: "<<setprecision(2)<<fixed<<total<<endl;//  #include<iomanip>
	}
    return 0;
}
