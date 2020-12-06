// write a C++ program to search the element in the 2D array
/*
// The time compelxity of this code is O(n*m)
#include<bits/stdc++.h>

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
 int target,i,j;
 cin>>target;
 bool flag = false;
 for(int i=0; i<n; i++)
 {
 	for(int j=0; j<m; j++)
 	{
 		if(arr[i][j] == target)
 		{
 			flag = true;
 			break;
		}
    }
 }
 
 if(flag)
 {
 	cout<<"Element found."<<endl;
 }
 else 
 {
 	cout<<"Element not found in the array."<<endl;
 }
 return 0;
}
*/

// The time complexity of this approach is O(n+m)
#include<bits/stdc++.h>

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
 int target;
 cin>>target;
 bool flag = false;
 int r = 0, c = m - 1;
 while(r < n && c >= 0)
 {
 	if(arr[r][c] == target)
 	{
 		flag = true;
 		break;
	}
	else if(arr[r][c] > target)
	{
		c--;
	}
	else 
	{
		r++;
	}
 }
 
 if(flag)
 {
 	cout<<"Element found."<<endl;
 }
 else 
 {
 	cout<<"Element does not found in the array."<<endl;
 }
 return 0;
}

