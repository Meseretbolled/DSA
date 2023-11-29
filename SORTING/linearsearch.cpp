#include<iostream>
using namespace std;
void linearSearch(int arr[],int n){
	int temp=-1;
	for(int i=0;i<5;i++)
	{
	if(arr[i]==n)
	{
		cout<<"found"<<i+1<<endl;
		temp=0;
	}
}
if(temp==-1)
{
	cout<<"not found"<<endl;
}
}
int main()
{ 
 int arr[5]={3,5,2,8,0};
 int num;
 cout<<"enter your number you want to be searched";
 cin>>num;
 linearSearch(arr,num);
 return 0;
}
