// write a C++ program to find the subarray with given sum

#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n,s;
 cin >> n >> s;
 int arr[n];
 for(int i=0; i<n; i++)
 {
 	cin>>arr[i];
 }
 int st = 0, en = 0, currSum = 0,j=0,i=0;
 while(j<n && currSum + arr[j]<=s)
 {
 	currSum += arr[j];
 	j++;
 }
 if(currSum == s)
 {
 	cout<<i+1<<" "<<j<<endl;
 	return 0;
 }
 while(j<n)
 {
 	currSum += arr[j];
 	while(currSum > s)
 	{
	 currSum -= arr[i];
 	i++;
    }
 	if(currSum == s)
 	{	
 	   st = i+1;
 	   en = j+1;
 	   break;
	}
 	j++;
 }
cout<<st<<" "<<en<<endl;
 return 0;
}

