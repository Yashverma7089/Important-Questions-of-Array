// write a C++ program to find the maximum till i-th position

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int mx = -1.9999999999;
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++)
 {
 	cin>>arr[i];
 }
 
 for(int i=0; i<n; i++)
 {
// 	if(max<arr[i])
// 	{
// 		max = arr[i];
// 		cout<<max<<"\t";
//	}
//	else 
//	{
// 		cout<<max<<"\t";
//	}

  mx = max(mx, arr[i]);
  cout<<mx<<endl;
 }
 return 0;
}

