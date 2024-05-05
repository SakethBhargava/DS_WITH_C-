#include <iostream>  
#include <stdlib.h>
using namespace std; 
void push();  
void pop();  
void display();  
struct node   
{  
    int val;  
    struct node *next;  
};  
struct node *head;  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        cout<<"not able to push the element";   
    }  
    else   
    {  
        cout<<"Enter the value : ";  
        cin>>val;  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;
        }
        cout<<"Item pushed"<<endl;
    }  
}  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        cout<<"Underflow"<<endl;  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;
        free(ptr);
        cout<<"Item popped"<<endl;  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        cout<<"Stack is empty"<<endl;  
    }  
    else  
    {  
        cout<<"Printing Stack elements"<<endl;  
        while(ptr!=NULL)
        {  
            cout<<"---"<<ptr->val;  
            ptr = ptr->next;  
        }  
    }
}
int main() 
{
   int ch;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"\nEnter choice: ";
      cin>>ch;
      switch(ch) 
      {
         case 1: 
         {
            push();
            break;
         }
         case 2: 
         {
            pop();
            break;
         }
         case 3: 
         {
            display();
            break;
         }
         case 4: 
         {
            cout<<"Exit"<<endl;
            break;
         }
         default: 
         {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}