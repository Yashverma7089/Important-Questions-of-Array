// write a C++ program to calculate the sum of running array 

#include<iostream>

using namespace std;

int main()
{
 int n;
 cin>>n;
 int array[n];
 
 for(int i=0; i<n; i++)
 {
 	cin>>array[i];
 }
 
 int sum = 0; 
 for(int i=0; i<n; i++)
 {
 	 sum = sum + array[i];
 	cout<<sum<<" ";
  }
 
 return 0;
}

