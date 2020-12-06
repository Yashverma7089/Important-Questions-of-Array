// write a C++ program to find the maximum and minimum numbers using arrays 

#include<iostream>
#include<climits>
using namespace std;

int main()
{
 int n;
 cout<<"Enter the size of an array:";
 cin>>n;
 int array[n];
 
 for(int i=0; i<n; i++)
 {
    cin>>array[i]; 
 }
 
 int maxNo = INT_MIN;
 int minNo = INT_MAX;
  
 for(int i=0; i<n; i++)
 {
    maxNo = max(maxNo, array[i]);
	minNo = min(minNo, array[i]);	
 }
 
 cout<<"Greatest Number is: "<<maxNo<<endl;
 cout<<"Lowest Number is: "<<minNo<<endl;
 return 0;
}

