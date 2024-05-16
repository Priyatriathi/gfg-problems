//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
   Node* rotate(Node* head, int k)
    {  
        Node *curr=head;
        if(head==NULL)
        return 0;
        if(k==0)
        return head;
        int c=0;
        vector<int>v;
        while(curr)
        {
            curr=curr->next;
            c++;
        }
        if(c==k)
        return head;
       curr=head;
        while(k--)
        {
         v.push_back(curr->data);
         curr=curr->next;
        }
        head=curr;
        while(curr->next)
        {
            curr=curr->next;
        }
       
        for(int i=0;i<v.size();i++)
        {
            Node *n=new Node(v[i]);
            curr->next=n;
            curr=curr->next;
        }
        return head;
    } 
};
    



//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends