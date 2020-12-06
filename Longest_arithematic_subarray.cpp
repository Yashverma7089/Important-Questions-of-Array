// write a C++ program to find the longest arithematic subarray

#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements in array: ";
 for(int i=0; i<n; i++)
 {
 	cin>>arr[i];
 }
 
 int pd = arr[1] - arr[0];
 int current = 2;
 int j = 2;
 int ans = 2;
 
 while(j<=n)
 {
 	if(pd == arr[j] - arr[j-1])
 	{
 		current++;
	}
	else
	{
		pd = arr[j] - arr[j-1];
		current = 2;
	}
	ans = max(ans, current);
	j++;
 }
 cout<<"The length of longest arithematic subarray is : "<<ans<<endl;
 return 0;
}

