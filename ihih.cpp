#include <iostream>
using namespace std;

float CalculateArea (int radius);
float CalculatePerimeter(int radius);

int main()
{
	int radius;
	cout<<"Enter the radius of the circle:";
	cin>>radius;
	
	cout<<"the area of the circle is :"<<CalculateArea<<endl;
	cout<<"the perimeter of the circle is  :"<<CalculatePerimeter<<endl;
	
	
	return 0;
}
float CalculateArea (int radius)
{
	float area=3.14*radius*radius;
	return area;
}
float CalculatePerimeter(int radius)
{
	float perimeter=2*3.14*radius;
	return perimeter;
}

