// write a C++ program to find the transpose of the matrix

// This code will give the transpose of Square matrix (n X n)
#include<iostream>

using namespace std;

int main()
{
 int n;
 cin>>n;
 int arr[n][n];
 for(int i=0; i<n; i++)
 {
 	for(int j=0; j<n; j++)
 	{
 		cin>>arr[i][j];
	 }
 }
 
 for(int i=0; i<n; i++)
 {
 	for(int j=i; j<n; j++)
 	{
 	   int temp  = arr[i][j];
 	   arr[i][j] = arr[j][i];
 	   arr[j][i] = temp;
	}
//	 cout<<endl;
 }
 
 for(int i=0; i<n; i++)
 {
 	for(int j=0; j<n; j++)
 	{
 		cout<<arr[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
 return 0;
}

/*
// This code will give the transpose of non-square matrix (nXm)

#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n][m], arr2[m][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			arr2[i][j] = arr1[j][i];
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
*/
