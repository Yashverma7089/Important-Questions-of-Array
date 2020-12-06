// write a C++ program to find the sum of all the subarrays of the given array

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int current = 0;
	int totalSubarray = 0;
	for(int i=0; i<n; i++)
	{
		current = 0;
		for(int j=i; j<n; j++)
		{
			current += arr[j];
			cout<<current<<endl;
			totalSubarray++;
		}
	}
	cout<<"Total number of subarrays are : "<<totalSubarray;

 return 0;
}

