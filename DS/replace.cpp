#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,num,key,pos;
    cout<<"Enter the array value :";
    cin>>key;
    cout<<"Enter the elements :"<<endl;
    for(i=0;i<key;i++)
        cin>>a[i];
        cout<<"Elements in array are :";
    for(i=0;i<key;i++)
        cout<<a[i]<<"   ";
        cout<<endl;
        cout<<"Enter which new element you want to insert :";
        cin>>num;
        cout<<"Enter the position to insert new element :";
        cin>>pos;
    for(i=0;i<key;i++)
    {
        if(i+1==pos)
        {
            a[pos-1]=num;
        }
    }
        cout<<"Final Output :";
    for(i=0;i<key;i++)
        cout<<a[i];
}