#include<iostream>
using namespace std;
int main()
{
	int a[100],position,i,n;
	cout<<"Enter the number of elements :";
	cin>>n;
	cout<<"Enter element :"<<n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the position to delete element :";
	cin>>position;
	if(position>=n+1)
	{
		cout<<"Deletion is not possible"<<endl;
	}
	else
	{
		for(i=position-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		cout<<"Resultant array :";
		for(i=0;i<n-1;i++)
		{
			cout<<a[i];
		}
	}
	return 0;
}