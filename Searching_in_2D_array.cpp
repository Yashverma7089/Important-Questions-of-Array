// write a C++ program to search the elements in 2D array.

#include<iostream>

using namespace std;

int main()
{
 int n,m;
 cin>>n>>m;
 int arr[n][m];
 for(int i=0; i<n; i++)
 {
 	for(int j=0; j<m; j++)
 	{
 		cin>>arr[i][j];
	}
 }
 int x;
 cin>>x;
 int flag = 0;
 cout<<"Matrix is :"<<endl;
 for(int i=0; i<n; i++)
 {
 	for(int j=0; j<m; j++)
 	{
 		
 		cout<<arr[i][j]<<" ";
	 }
	 cout<<endl;
 }
 cout<<endl;
 
 for(int i=0; i<n; i++)
 {
 	for(int j=0; j<m; j++)
 	{
 		if(arr[i][j]==x)
 		{
 			cout<<i<<" "<<j<<endl;
 			flag = 1;
		 }
	 }
 }
 
 if(flag)
 {
 	cout<<"Element is found "<<endl;
 }
 else 
 {
 	cout<<"Element not found "<<endl;
 }
 return 0;
}

