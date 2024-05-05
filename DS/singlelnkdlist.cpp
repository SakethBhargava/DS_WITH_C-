#include<iostream>
#include<stdlib.h>
using namespace std;  
void create();
void display();
void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
struct node
{
        int data;
        struct node *next;
};
struct node *start=NULL;
void create()
{
	if(start == '\0')
	{
		start=(struct node *)malloc(sizeof(struct node));
		cout<<"\nEnter the data value for the node:\t";
		cin>>start->data;
		start->next=NULL;
	}
	else
	{
	    cout<<"\nAlready created";
	}
};
void display()
{
	struct node *temp=start;
	if(start==NULL)
	{
		cout<<"\nList is empty:\n";
		return;
	}
	else
	{
		temp=start;
		cout<<"\nThe List elements are:\n";
		while(temp!=NULL)
		{
			cout<<temp->data<<"---";
			temp=temp->next;
		}
	}
};
void insert_beg()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	cout<<"\nEnter the data value for the node:\t" ;
	cin>>temp->data;
	temp->next =NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
};
void insert_end()
{
	struct node *temp=start,*ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	cout<<"\nEnter the data value for the node:\t" ;
	cin>>ptr->data ;
	ptr->next =NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		while(temp->next !=NULL)
		{
			temp=temp->next ;
		}
		temp->next =ptr;
	}
};
void insert_pos()
{
	struct node *temp=start,*ptr;
	int i,pos;
	ptr=(struct node *)malloc(sizeof(struct node));
	cout<<"\nEnter the position for the new node to be inserted:\t";
	cin>>pos;
	cout<<"\nEnter the data value of the node:\t";
	cin>>ptr->data;
	 ptr->next=NULL;
	if(pos==0)
	{
		insert_beg();
	}
	else
	{
		for(i=0;i<pos-1;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				cout<<"\nPosition not found:[Handle with care]\n";
				return;
			}
		}
		ptr->next =temp->next ;
		temp->next=ptr;
	}
};
void delete_beg()
{
	struct node *temp;
	if(start==NULL)
	{
		cout<<"\nList is Empty:\n";
		return;
	}
	else
	{
		temp=start;
		start=start->next ;
		cout<<"\nThe deleted element is :\t"<<temp->data;
		free(temp);
	}
};
void delete_end()
{
	struct node *temp=start,*ptr;
	if(start==NULL)
	{
		cout<<"\nList is Empty:";
		exit(0);
	}
	else if(start->next ==NULL)
	{
		temp=start;
		start=NULL;
		cout<<"\nThe deleted element is:\t"<<temp->data;
		free(temp);
	}
	else
	{
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=NULL;
		cout<<"\nThe deleted element is:\t"<<temp->data;
		free(temp);
	}
};
void delete_pos()
{
	int i,pos;
	struct node *temp=start,*ptr;
	if(start==NULL)
	{
		cout<<"\nThe List is Empty:\n";
		exit(0);
	}
	else
	{
		cout<<"\nEnter the position of the node to be deleted:\t";
		cin>>pos;
		if(pos==0)
		{
			temp=start;
			start=start->next ;
			cout<<"\nThe deleted element is :\t"<<temp->data;
			free(temp);
		}
		else
		{
			for(i=0;i<pos;i++)
			{
				ptr=temp;
				temp=temp->next ;
				if(temp==NULL)
				{
					cout<<"\nPosition not Found:\n";
					return;
				}
			}
			ptr->next =temp->next ;
			cout<<"\nThe deleted element is :\t"<<temp->data;
			free(temp);
		}
	}
};
int main()
{   
	int ch;
	 
		cout<<"***SINGLE LINKED LIST OPERATIONS:****"<<endl;
		cout<<" 1.Create"<<endl;
		cout<<" 2.Display"<<endl;
		cout<<" 3.Insert at the beginning"<<endl;
		cout<<" 4.Insert at the end"<<endl;
		cout<<" 5.Insert at specified position"<<endl;
		cout<<" 6.Delete from beginning"<<endl;
		cout<<" 7.Delete from the end "<<endl;
		cout<<" 8.Delete from specified position"<<endl;
		cout<<" 9.Exit"<<endl;

			do {
				cout<<"\nEnter choice: ";
				cin>>ch;
				switch(ch)

					{
						case 1:
                        {
							create();
							break;
                        }
                        case 2:
						{
                        	display();
							break;
                        }
						case 3:
                        {
							insert_beg();
							break;
                        }
						case 4:
                        {
							insert_end();
							break;
						
                        }
                        case 5:
                        {
							insert_pos();
							break;
                        }
                        case 6:
                        {
							delete_beg();
							break;
                        }
                        case 7:
						{
                         	delete_end();
							break;
                        }
                        case 8:
                        {
							delete_pos();
							break;
                        }
						case 9:
                        {
                            cout<<"Exit"<<endl;
                            break;
                        }
						default:
								cout<<"\n Wrong Choice:";
								break;
					}
				}while(ch!=9);
}