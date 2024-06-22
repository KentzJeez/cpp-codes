#include<iostream>
#include<cmath>
using namespace std;
void inputHeights(float height[],int size);
float findMaxHeight(float height[],int size);
float findMinHeight(float height[],int size);
float findTotalHeight(float height[],int size);
void printHeights(float height[],int size);
int main()
{
	float height[5];
	inputHeights(height,5);
	cout<<"The Maximum height is: "<<findMaxHeight(height,5)<<endl;
	cout<<"The Minimum height is: "<<findMinHeight(height,5)<<endl;
	cout<<"The Total heights are:- "<<findTotalHeight(height,5)<<endl;
	printHeights(height,5);
	return 0;
}
void inputHeights(float height[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"The height of the Student "<<i+1<<" : ";
		cin>>height[i];
	}
}

float findMaxHeight(float height[],int size)
{
	float maxi=height[0];
	for(int i=0;i<size;i++)
	{
		maxi=max(maxi,height[i]);
	}
	return maxi;
}

float findMinHeight(float height[],int size)
{
	float mini=height[0];
	for(int i=0;i<size;i++)
	{
		mini=min(mini,height[i]);
	}
	return mini;
}

float findTotalHeight(float height[],int size)
{
	float total=0;
	for(int i=0;i<size;i++)
	{
		total=total+height[i];
	}
	return total;
}

void printHeights(float height[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"The Height of the Student "<<i+1<<" : "<<height[i]<<endl;
	}
}
