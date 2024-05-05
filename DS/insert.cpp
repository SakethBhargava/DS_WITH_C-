#include <iostream>
using namespace std;
int main()
{
	int array[50],i,value,pos,n;
	cout<<"Enter the number of elements:-";
	cin>>n;
	cout<<"Enter elements :";
	for(i=0;i<n;i++)
		cin>>array[i];
	cout<<"Enter the position for the value to be inserted :";
	cin>>pos;
	cout<<"Enter the value to be inserted :";
	cin>>value;
	for(i=n-1;i>=pos-1;i--)
	{
		array[i+1]=array[i];
	}
	array[pos-1]=value;
	cout<<"Resulting array is :";
	for(i=0;i<=n;i++)
		cout<<array[i];
	return 0;
}
