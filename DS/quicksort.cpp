#include<iostream>
using namespace std;
void quicksort(int num[25],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(num[i]<=num[pivot]&&i<last)
            i++;
            while(num[j]>num[pivot])
            j--;
            if(i<j)
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
        temp=num[pivot];
        num[pivot]=num[j];
        num[j]=temp;
        quicksort(num,first,j-1);
        quicksort(num,j+1,last);
    }
}
int main()
{
    int i,count,num[10];
    cout<<"QUICK SORT"<<endl;
    cout<<"Enter array value :";
    cin>>count;
    cout<<"Enter elements :";
    for(i=0;i<count;i++)
        cin>>num[i];
    quicksort(num,0,count-1);
    cout<<"Order of Sorted elements: ";
    for(i=0;i<count;i++)
        cout<<num[i]<<"  ";
    cout<<endl;
}