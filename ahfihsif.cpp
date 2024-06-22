#include <iostream>
using namespace std;

string fname,lname,status,gender,title;

void readInputs();
void processTitle();
void PrintMessage();

int main()
{
	readInputs();
	processTitle();
	PrintMessage();
	
	return 0;
}
void readInputs ()
{
	cout<<"Enter the first name :";
	cin>>fname;
	
	cout<<"Enter the last name :";
	cin>>lname;
	
	cout<<"Enter the gender :";
	cin>>gender;
	
	cout<<"Enter maritial status :";
	cin>>status;
	
}

void processTitle()
{
	if(gender=="M")
		title="Mr. ";
	else if(gender == "F" && status == "single")
		title="Miss. ";
	else
		title="Mrs. ";
		
}
void PrintMessage ()
{
	cout<<"Hi "<<title<<""<<fname<<" "<<lname;
}


