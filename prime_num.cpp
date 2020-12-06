// write a C++ program to check whether the given number is prime or not

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
 int num;
 bool flag = 0;
 cout<<"Enter the number: ";
 cin>>num;
 for(int i=2; i<=sqrt(num); i++)
 {
 	if(num%i==0)
  	{
  		cout<<"Non prime number\n";
  		flag = 1;
  		break;
	  }
 }
  
  if(flag == 0)
  cout<<"Prime number\n";
 return 0;
}

