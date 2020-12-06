// write a C++ program to perform the sorting in an unsorted array

// This was the selection Sort Method
//	#include<iostream>
//	
//	using namespace std;
//	
//	int main()
//	{
//		int n;
//		cin>>n;
//		int arr[n];
//		cout<<"Enter the elements in array: ";
//	    for(int i=0; i<n; i++)
//	    {
//	    	cin>>arr[i];
//		}
//		
//		for(int i=0; i<n-1; i++)
//		{
//			for(int j=i+1; j<n; j++)
//			{
//				if(arr[j]<arr[i])
//				{
//				int temp = arr[i];
//					arr[i]=arr[j];
//					arr[j]=temp;
//				}
//			}
//		}
//		
//		for(int i=0; i<n; i++)
//		{
//			cout<<arr[i]<<"\t";
//		}
//	
//	 return 0;
//	}

//This was the Bubble Sorting Method
//	#include<iostream>
//	
//	using namespace std;
//	
//	int main()
//	{
//		int n;
//		cin>>n;
//		int arr[n];
//		cout<<"Enter the elements in array: ";
//	    for(int i=0; i<n; i++)
//	    {
//	    	cin>>arr[i];
//		}
//		
//		for(int i=0; i<n; i++)
//		{
//			for(int j=0; j<n-i-1; j++)
//			{                                                 
//				if(arr[j]>arr[j+1])                          
//				{
//				int temp = arr[j];
//					arr[j]=arr[j+1];
//					arr[j+1]=temp;
//				}
//			}
//		}
//		
//		for(int i=0; i<n; i++)
//		{
//			cout<<arr[i]<<"\t";
//		}
//	
//	 return 0;
//	}

// This was the Insertion Sort Method 

	#include<iostream>
	
	using namespace std;
	
	int main()
	{
		int n;
		cin>>n;
		int arr[n];
		cout<<"Enter the elements in array: ";
	    for(int i=0; i<n; i++)
	    {
	    	cin>>arr[i];
		}
		
		for(int i=1; i<n; i++)
		{
			int current = arr[i];
			int j = i-1;
		    while(arr[j]>current && j>=0)
		    {
		    	arr[j+1] = arr[j];
		    	j--;
			}
			arr[j+1] = current; 
		}
		
		for(int i=0; i<n; i++)
		{
			cout<<arr[i]<<"\t";
		}
	
	 return 0;
	}
