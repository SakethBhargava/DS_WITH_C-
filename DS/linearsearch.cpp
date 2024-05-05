#include<iostream>
using namespace std;
int main()
{
	int num,n,i,a[10],b=0;
	cout<<"Enter the array value :";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the element to be searched :";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
			b=1;
			break;
		}
	}
	if(b==1)
		cout<<"Element was found in given array list at position "<<i+1<<endl;
	else
		cout<<"Element is not found in the given array list"<<endl;
}