// write a C++ program to show the concept of binary search in 1-D array 

#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
	int start = 0;
	int end = n;									// 1 2 3 4 5 6 7 8 9
	while(start<end)
	{
	  int mid = (start+end)/2;
	  if(arr[mid]==key)
	  {
	  	return mid;
	  }
	  else if(mid<key)
	  {
	  	start = mid + 1;
	  }
	  else 
	  {
	  	end = mid - 1;
	  }
	 }  
	return -1;                                   
}

int main()
{
  int n;
  cout<<"ENter the size of the array: ";
  cin>>n;
  
  int arr[n];
  
  
  for(int i=0; i<n; i++)
  {
  cout<<"Enter the element at array["<<i<<"]: ";
  	cin>>arr[i];
  }
  cout<<endl;
  for(int i=0; i<n; i++)
  {
  	cout<<arr[i]<<"\t";
  }
  cout<<endl;
  
  int key;
  cout<<"Enter the element you want to search: ";
  cin>>key;
  
  cout<<"Element found at the "<<binarySearch(arr,n,key)<<" position."<<endl;
 return 0;
}

