#include <iostream>
#include <queue>
using namespace std;
void dequeElements(priority_queue <int> que) 
{
   priority_queue <int> q = que;
   while(!q.empty())
   {
      cout << q.top() << " ";
      q.pop();
   }
   cout<<endl;
}
int main() 
{
   priority_queue <int> que;
   que.push(10);
   que.push(20);
   que.push(30);
   que.push(40);
   que.push(38);
   cout << "Currently que is holding : ";
   dequeElements(que);
   cout << "Size of queue : " << que.size() << endl;
   cout << "Element at top position : " << que.top() << endl;
   cout << "Delete from queue : ";
   que.pop();
   dequeElements(que);
   cout << "Delete from queue : ";
   que.pop();
   dequeElements(que);
}