#include<iostream>
using namespace std;
int main()
{
    int a[20],i,n=0,m,p,t,min,flag=0;
    cout<<"SELECTION SORT"<<endl;
    cout<<"Enter the limit:";
    cin>>m;
    cout<<"Enter the values :";
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    min=a[n];
    p=n;
    i=0;
    while(n<m)
    {
        for(i=n+1;i<m;i++)
        {
            if(a[i]<min)
            {
                flag=1;
                min=a[i];
                p=i;
            }
        }
        if (flag)
        {
            t=a[n];
            a[n]=a[p];
            a[p]=t;
        }
        flag=0;
        n++;
        min=a[n];
    }
    cout<<"Sorted Order :";
    for(i=0;i<m;i++)
    {
        cout<<a[i]<<"   ";
    }
}