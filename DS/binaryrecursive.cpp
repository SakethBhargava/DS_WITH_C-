#include <iostream>
using namespace std;
int BinarySearch(int arr[10], int num, int beg, int end)
{
 int mid;
 if (beg > end)
 {
  cout << "Number is not found";
 } 
 else 
 {
  mid = (beg + end) / 2;
  if(arr[mid] == num)
  {
   cout << "Number is found at " << mid << " index \n";
  } else if (num > arr[mid]) 
  {
    BinarySearch (arr, num, mid+1, end);
  } else if (num < arr[mid]) 
  {
   BinarySearch (arr, num, beg , mid-1);
  }
 }
 return 0;
}
int main() 
{
int arr[100], num, i, n, beg, end;
cout <<"Enter the size of an array : \n";
cin >> n;
cout <<"Enter the sorted values \n";
for(i=0; i<n; i++) 
{
 cin >> arr[i];
}
cout <<"Enter a value to be search \n";
cin >> num;
beg = 0;
end = n-1;
BinarySearch (arr, num, beg, end);
}
