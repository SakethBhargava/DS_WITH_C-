#include<iostream>
using namespace std;
struct tree
{
    int num;
    struct tree *left,*right;
};
struct tree *root=NULL;
class binary
{
    public:
    struct tree *insert(struct tree *root,int num);
    void preorder(struct tree *root);
    void postorder(struct tree *root);
    void inorder(struct tree *root);
};
struct tree *binary::insert(struct tree *root,int digit)
{
    if(root==NULL)
    {
        root=(struct tree*)malloc(sizeof(struct tree));
        root->left=root->right=NULL;
        root->num=digit;
    }
    else if(digit<root->num)
    {
        root->left=insert(root->left,digit);
    }
    else if(digit>root->num)
    {
        root->right=insert(root->right,digit);
    }
    else if(digit==root->num)
    {
        cout<<"Already exists"<<endl;
    }
    return root;
}
void binary :: preorder(struct tree *root)
{
    if(root!=NULL)
    {
        cout<<"\t"<<root->num;
        preorder(root->left);
        preorder(root->right);
        cout<<endl;
    }
}
void binary :: postorder(struct tree *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<"\t"<<root->num;
    }
}
void binary :: inorder(struct tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<"\t"<<root->num;
        inorder(root->right);
        cout<<endl;
    }
}
int main()
{
    int ch, digit;
    binary b;
    while(1)
    {
        cout<<"1.Creation"<<endl;
        cout<<"2.Preorder"<<endl;
        cout<<"3.Post order"<<endl;
        cout<<"4.Inorder"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            cout<<"0 to quit"<<endl;
            cout<<"Enter the value :";
            cin>>digit;
            while(digit!=0)
            {
                root=b.insert(root,digit);
                cin>>digit;
            }
            continue;
        case 2: 
            {
                cout<<"Preoder level :";
                b.preorder(root);
                break;
            }
        case 3:
            {
                cout<<"Postoder level :";
                b.postorder(root);
                break;
            }
        case 4:
            { 
                cout<<"Inorder level :";
                b.inorder(root);
                break;
            }
        case 5:
            exit(0);
        }
    }
}