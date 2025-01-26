#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int key;
    Node*left;
    Node*right;
};
Node*newnode(int data)
{
    Node*k=new Node();
    k->key=data;
    k->left=NULL;
    k->right=NULL;
    return k;
}


Node*Insert(int data,Node*root)
{
    Node*nn=newnode(data);
    if(root==NULL)
    {
        root=nn;
    }
    else
    {   queue<Node*>q;
        q.push(root);
        Node*pre=NULL;
        while(!q.empty())
        {
            pre=q.front();
            q.pop();
           if(pre->key > nn->key)
         {
            
           if(pre->left==NULL)
            {
              pre->left=nn;
              break;
            }
            else if(pre->left!=NULL)
           
            {
               q.push(pre->left); 
            }
            
         }
           if(pre->key < nn->key)
        {
            if(pre->right==NULL)
            {
                pre->right=nn;
                break;
            }
            else if(pre->right!=NULL)
            {
                q.push(pre->right);
            }
        }
        }
    }
    return root;
}

Node*display(Node*root)
{
    if(root==NULL)
    {
        cout<<"tree is empty"<<endl;
    }
    else
    {
        queue<Node*>q;
        q.push(root);
        Node*pre=NULL;
        while(!q.empty())
        {
            pre=q.front();
            q.pop();
            cout<<pre->key<<" ";
            if(pre->left!=NULL)
            {
                q.push(pre->left);
            }
            if(pre->right!=NULL)
            {
                q.push(pre->right);
            }
        }
        cout<<"NULL"<<endl;
    }return root;
}

int main() {
    Node*root=NULL;
    root=Insert(20,root);
    root=Insert(30,root);
    root=Insert(63,root); 
    root=Insert(50,root);
    root=Insert(45,root);
    root=Insert(70,root);
    root=Insert(7,root);
    root=display(root);
}
