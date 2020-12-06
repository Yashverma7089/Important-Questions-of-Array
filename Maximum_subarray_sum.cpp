// write a C++ program to find maximum subarray sum
/*
The time coxplexity of this piece of code is O(n^3). 

#include<iostream>
#include<climits>
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
 int mx = INT_MIN;
 for(int i=0; i<n; i++){
 	for(int j=i; j<n; j++){
 		int sum = 0;
 		for(int k=i; k<=j; k++){
 			sum += arr[k];
		 }
		 mx = max(mx,sum);
	}
 }
 cout<<mx<<endl;
 return 0;
}*/

/*
// This solution is based on Cummulative Sum Approach and its time coxplexity is O(n^2)
#include<iostream>
#include<climits>
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
	
	int currentSum[n+1];
	currentSum[0] = 0;
    
    for(int i=1; i<=n; i++)
    {
    	currentSum[i] = currentSum[i-1] + arr[i-1];
	}
	
	int maxSum = INT_MIN;
	for(int i=1; i<=n; i++)
	{
		int sum = 0;
		for(int j=0; j<i; j++)
		{
			sum = currentSum[i] - currentSum[j];
			maxSum = max(maxSum,sum);
		}
	}
	
	cout<<maxSum<<endl;
	return 0;
}
*/

// This solution is based on Kadane's Algorithm and its time complexity is O(n)

#include<iostream>
#include<climits>
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
	int currentSum =0;
	int maxSum = 0;
	for(int i=0; i<n; i++)
	{
		currentSum += arr[i];
		if(currentSum<0)
		{
			currentSum = 0;
		}
		maxSum = max(maxSum, currentSum);
	}
	cout<<maxSum<<endl;
	return 0;
}
