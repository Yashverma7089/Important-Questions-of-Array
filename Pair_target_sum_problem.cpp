// write a C++ program to solve the Pair Target Sum Problem

/*
// The time complexity of this code is O(n^2) 
#include<bits/stdc++.h>

using namespace std;

bool pairSum(int arr[], int n, int k)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]+arr[j] == k)
			{
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
}

int main()
{
  int n,k; 
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
  	cin>>arr[i];
  }
  cin>>k;
  cout<<pairSum(arr,n,k);
 return 0;
}
*/

// The time complexity of this code is O(n) and to use this approach we first need to sort the array

// There are three steps to solve this problem
// (1) Sort the array.
// (2) Set the lower bound at 0 and upper bound at n-1 position
// (3) Compare the sum of arr[lower] + arr[upper]  == k or not if the sum is equal then print the indices otherwise 
//     check whether the sum is greater or lower than k if sum is greater than k then decrease the upper bound by 
//     -1 else increase the lower bound by +1
	   
#include<bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int k)
{
   int low = 0;
   int high = n-1;	
   while(low < high)
   {
   	 if(arr[low] + arr[high] == k)
   	 {
   	 	cout<<low<<" "<<high<<endl;
   	 	return true;
	 }
	 else if(arr[low] + arr[high] > k)
	 {
	 	high--;
	 }
	 else 
	 {
	 	low++;
	 }
   }
   return false;
}

int main()
{
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	cin>>k;
	
	// this loop will sort the array in ascending order
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]<arr[i])
			{
			int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	cout<<pairSum(arr,n,k)<<endl;
	return 0;
}
