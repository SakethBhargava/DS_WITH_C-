#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *prev,*next;
};
struct node *head,*temp,*lend;

void create();
void insert();
void del();
void disp(struct node*);

void create()
{
	int n,n1,op;
	struct node *ptr;
	cout<<"Enter head data :";
	cin>>n;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=n;
	ptr->prev=NULL;
	ptr->next=NULL;
	head=ptr;
	do
	{
		cout<<"Enter the data :";
		cin>>n1;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=n1;
		ptr->next=temp;
		temp->prev=ptr;
		ptr=ptr->next;
		ptr->next=NULL;
		lend=ptr;
		cout<<"Do u want to enter another data(yes press 1) :";
		cin>>op;
	}
	while(op==1);
	disp(head);
}

void insert()
{
	int op,n,pn;
	struct node *ptr;
	cout<<"1.Insertion at beginning"<<endl;
	cout<<"2.Insertion at end"<<endl;
	cout<<"3.Insertion at middle"<<endl;
	cout<<"Enter your choice:";
	cin>>op;
	cout<<"Enter your data:";
	cin>>n;
	switch(op)
	{
		case 1:
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=n;
			head->prev=temp;
			temp->next=head;
			head=temp;
			temp->prev=NULL;
			break;
		case 2:
			ptr=head;
			while(ptr!=lend)//traverse the end of the list
				ptr=ptr->next;
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=n;
			ptr->next=temp;
			temp->prev=ptr;
			ptr=ptr->next;
			ptr->next=NULL;
			lend=ptr;
			break;
		case 3:
			ptr=head;
			cout<<"Enter the previous node value :";
			cin>>pn;
			while(ptr->data!=pn)
				ptr=ptr->next;
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data=n;
			temp->next=ptr->next;
			ptr->next->prev=temp;
			ptr->next=temp;
			temp->prev=ptr;
			break;
	}
	disp(head);
}

void del()
{
	int op,n,pn;
	struct node *ptr;
	cout<<"1.Deletion at beginning"<<endl;
	cout<<"2.Deletion at end"<<endl;
	cout<<"3.Deletion at middle"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			head=head->next;
			head->prev=NULL;
			break;
		case 2:
			ptr=head;
			while(ptr!=lend)
				ptr=ptr->next;
			ptr->prev->next=NULL;
			ptr=ptr->prev;
			lend=ptr;
			break;
		case 3:
			ptr=head;
			cout<<"Enter node value to be deleted :";
			cin>>pn;
			while(ptr->data!=pn)
				ptr=ptr->next;
			ptr->prev->next=ptr->next;
			ptr->next->prev=ptr->prev;
			break;
	}
	disp(head);
}

void disp(struct node *head)
{
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		cout<<"---";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}

int main()
{
	int opt;
	do
	{
		cout<<"1.Creation"<<endl;
		cout<<"2.Insertion"<<endl;
		cout<<"3.Deletion"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>opt;
		switch(opt)
		{
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				del();
				break;
			case 4:
				exit(0);
		}
	}
	while(opt<=4);
}