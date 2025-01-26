#include <bits/stdc++.h>
using namespace std;
class Node//declaring address and data
{
    public:
      int key;
      Node*next;
};
Node*newnode(int data)//creating   new node
{
 Node*n=new Node();
 n->key=data;
 n->next=NULL;
 return n;
}
Node*insert_begin(int data,Node*head)
{
    Node*nn=newnode(data);
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        nn->next=head;
        head=nn;
    }
    return head;
}
Node*insert_end(int data,Node*head)
{
    Node*nn=newnode(data);
    if(head==NULL)
    {
     nn=head;   
    } 
    else
    {
        Node*temp=head;
        while(temp->next!=NULL)
        {
          temp=temp->next; 
        }
         temp->next=nn;
    }
    return head;
}
Node*insert_mid(int data,Node*head,int pos)
{
    Node*nn=newnode(data);
    if(head==NULL)
    {
        nn=head;
    }
    
    else
    {   int count=1;
        Node*temp=head;
        while(temp->next!=NULL)
        {
             count++;
             temp=temp->next;
          if(count ==pos)
           {
            break;
           }
        }
       
       
        if(count == pos)
        {
            nn->next=temp->next;
            temp->next=nn;
        }
            else
            {
                cout<<"invalid position"<<endl;
            }
        }
        return head;
}
Node*display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->key<<"->";
        temp=temp->next;
    }
    cout<<NULL<<" " << endl;
    return head;
}
Node* delete_first(Node* head)
{
    if(head == NULL)
    {
        cout << "Invalid" << " ";
    }
    else
    {
        head = head->next;
    }
    return head;
}

Node* delete_end(Node* head)
{
    Node* temp = head;
    if(head == NULL)
    {
        cout << "Invalid" << " ";
    }
    else if(head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    return head;
}
Node* delete_pos(int pos,Node* head)
{
    if(head == NULL)
    {
        cout << "Invalid" << " ";
    }
    else if(pos==1)
    {
     head=delete_first(head); 
    }
    else
    {
        int count = 1;
        Node* temp = head;
        while(temp != NULL)
        {
            Node* temp1 = temp->next;
            count++;
            if(count == pos)
            {
                temp->next = temp1->next;
                temp1->next = NULL;
                break;
            }
            temp = temp->next;
        }
    }
    return head;
}

Node* search(Node*head,int data)
{
    if(head==NULL)
    {
        cout<<"element not present"<<endl;
    }
    else
    {   
        int count =0;
        Node*temp=head;
        while(temp!=NULL)
        {
           temp=temp->next; 
           if(temp->key==data)
           {
               cout<<"element found"<<endl;
               count++;
               break;
           }
        }
        if(count ==0)
           {
               cout<<"element not present"<<endl;
           }
    }
    return head; 
}
Node*reverse(Node*head){
  
    if(head==NULL)
     cout<<"List is empty";
    else if(head->next==NULL)
     cout<<"List contain one value";
    else{
        Node*temp1=NULL;
        Node*temp2=head;
        Node*temp3=head->next;
    while(temp3!=NULL){
    temp2->next=temp1;
    temp1=temp2;
    temp2=temp3;
    temp3=temp2->next;
    }
    temp2->next=temp1;
    head=temp2;
    }
    return head;
}
int main() 
{
Node*head=NULL;
head=insert_begin(20,head);
head=insert_begin(15,head);
head=insert_begin(10,head);
head=insert_end(70,head);
head=insert_mid(60,head,3);
//head=delete_pos(3,head);

//head=search(head,70);
head=display(head);
head=reverse(head);
//head=display(head);
}
