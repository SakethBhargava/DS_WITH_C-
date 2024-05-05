#include <iostream>
using namespace std;
int main()
{
    int arr[50],n,i,j,t;
    cout<<"BUBBLE SORT"<<endl;
    cout<<"Enter the limit :";
    cin>>n;
    cout<<"Enter the elements :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sorting :";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    cout<<endl;
    cout<<"After sorting :";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}