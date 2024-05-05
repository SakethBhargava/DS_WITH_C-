#include <iostream>
using namespace std;
int main()
{
	int a[10],i,count=0,n;
	cout<<"Enter the value of n :";
	cin>>n;
	cout<<"Enter the elements :"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		if(a[i]==0)
			count++;
	cout<<"The number of 0's in the array is "<<count<<endl;
	cout<<"The number of 1's in the array is "<<n-count<<endl;
	return 0;
}