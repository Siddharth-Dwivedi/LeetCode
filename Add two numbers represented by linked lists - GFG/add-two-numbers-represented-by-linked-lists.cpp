//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* reverse(Node* &head){
        Node* prev = NULL;
        Node* curr = head;
        Node* frwd;
        while(curr!=NULL){
            frwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwd;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* newHead = reverse(first);
        Node* newHead1 = reverse(second);
        Node* n1 ;
        // Node* n2 = newHead1;
        int c=0;
        Node* real=NULL;
        
        while(newHead && newHead1){
            c = c + newHead->data + newHead1->data;
            int n = c%10;
            c = c/10;
            if(real==NULL){
                real = new Node(n);
                n1 = real;
            }
            else{
                real->next = new Node(n);
                real = real->next;
            }
            newHead = newHead->next;
            newHead1 = newHead1->next;
        }
        Node* temp;
        // if(newHead == NULL && newHead1 ==NULL){
        //     if(c==1)
        //     return reverse(n1);
        // }
        if(newHead == NULL){
            temp = newHead1;
        }
        else if(newHead1 == NULL){
            temp = newHead;
        }
        while(temp!=NULL){
            if(real==NULL){
                real= new Node(temp->data);
                n1 = real;
            }
            else{
                 c = c + temp->data;
                int n = c%10;
                c = c/10;
                real->next = new Node(n);
                real = real->next;
            
            }
            temp = temp->next;
        }
        
        if(c==1){
            real->next = new Node(1);
        }
        Node* final = reverse(n1);
        return final;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends