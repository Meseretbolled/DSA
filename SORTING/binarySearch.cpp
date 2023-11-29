#include<iostream>
using namespace std;
int binarySearch(int array[],int size,int searchValue)
{
	int low=0;
	int high=size-1;
	int mid;
	mid=(low+high)/2;
	if(searchValue==array[mid])
	{
     return mid;
 }
 else if (searchValue > array[mid])
 {
 	low=mid+1;
 }
 else
 { high=mid-1;
 }
	
}
int main()
{
	 int a[]={15,23,7,45,87,16};
	 int userValue;
	 cout<<"enter an integer:"<<endl;
	 cin>>userValue;
	 int result=binarySearch(a,6,userValue);
	 if(result>=0)
	 {
	cout<<"the number "<<a[result]<<"was found at the"<<result<<" "<<endl;
		 
	 }
	 else
	 {cout<<"the number"<<userValue<<"is not found."<<endl;
	 
	 }
}
