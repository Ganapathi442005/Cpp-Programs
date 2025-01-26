#include <bits/stdc++.h>
using namespace std;
//Stack------Program
class Node
{
    public:
        char key;
        Node* next;
};

Node* newnode(char data)
{
    Node* n = new Node();
    n->key = data;
    n->next = NULL;
    return n;
}

Node* push(int data,Node* head)
{
    Node* nn = newnode(data);
    if(head==NULL)
    {
        head = nn;
    }
    else
    {
        nn->next = head;
        head = nn;
    }
    return head;
}

Node* pop(Node*head)
{
    if(head == NULL)
    {
        cout << "Not possible" << " ";
    }
    else
    {
        head = head->next;
    }
    return head;
}

Node* display(Node* head)
{
    if(head == NULL)
    {
        cout << "No elements" << " ";
    }
    else
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout << temp->key << endl;
            temp = temp->next;
        }
    }
    return head;
}

int main() {
	Node* head = NULL;
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++)
	{
	    
	}
	return 0;
}
