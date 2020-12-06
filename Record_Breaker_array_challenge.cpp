// write a C++ program to find the number of Record Breaker's Day

#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
 int arr[n+1];
 for(int i=0; i<n; i++)
 {
 	cin>>arr[i];
 }
 arr[n]= -199;
 if(n==1)
 {
 	cout<<"1"<<endl;
 	return 0;
 }
 
 int ans = 0;
 int mx = -1;
 for(int i=0; i<n; i++)
 {
 	if(arr[i]>mx && arr[i]>arr[i+1])
 	{
 		ans++;
	 }
    mx = max(mx, arr[i]); 
 }
 cout<<"The no of record breaking days are: "<<ans<<endl;
 return 0;
}

