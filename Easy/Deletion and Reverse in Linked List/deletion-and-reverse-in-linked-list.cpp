//{ Driver Code Starts
// C program to delete a given key from
// linked list.
#include<bits/stdc++.h>
using namespace std;

/* structure for a node */
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};

Node *pre=NULL;

/* Function to delete a given node from the list */
//void deleteNode(struct Node *head, int key);
void deleteNode(Node **head,int data);
void reverse(Node **head);

/* Function to reverse the linked list */
//static void reverse(struct Node** head_ref);

/* Function to insert a node at the beginning of
a Circular linked list */

void push(struct Node **head_ref, int data)
{
	// Create a new node and make head as next
	// of it.

        struct Node *curr = new Node(data);

        curr->next=curr;
    
    	if(*head_ref==NULL)
        {
            *head_ref=curr;
            curr->next=*head_ref;
            pre=*head_ref;
    
        }
        else
        {
            curr->next=*head_ref;
            pre->next=curr;
            pre=pre->next;
    
    
        }
}

/* Function to print nodes in a given
circular linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	if (head != NULL)
	{
		do
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		while (temp != head);
	}
    else
    cout<<"empty"<<endl;

	printf("\n");
}
/* Driver program to test above functions */
int main()
{

	/* Initialize lists as empty */
	int t,a,delnode;
	cin>>t;
	while(t--)
	{
        pre=NULL;
	   Node *head=NULL;
      
        int n;
	    cin>>n;
	    while(n--)
	    {
	        cin>>a;
	        push(&head,a);
	    }    
	/* Created linked list will be 2->5->7->8->10 */
	cin>>delnode;

	deleteNode(&head, delnode);
	
	reverse(&head);

	printList(head);
}
	return 0;
}

// } Driver Code Ends


/* structure for a node 
struct Node
{
	int data;
	struct Node *next;
};
*/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{
    if (*head == NULL) // Check if the list is empty
        return;

    struct Node *curr = *head, *prev = NULL;

    // Check if the head node itself holds the key to be deleted
    if ((*head)->data == key)
    {
        // Find the last node in the list
        while (curr->next != *head)
            curr = curr->next;
        
        if (curr == *head) { // The list has only one node
            free(*head);
            *head = NULL;
            return;
        }

        curr->next = (*head)->next;
        free(*head);
        *head = curr->next;
        return;
    }

    curr = *head;
    do {
        prev = curr;
        curr = curr->next;
    } while (curr != *head && curr->data != key);

    // If the node to be deleted was found
    if (curr->data == key) {
        prev->next = curr->next;
        free(curr);
    }
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{

struct Node *cur = *head_ref;
    struct Node *prev = NULL;
    struct Node *forw = NULL;
    do {
        forw = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forw;
    } while (cur != *head_ref);
    (*head_ref)->next = prev;
    *head_ref = prev;


}