//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
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
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* newHead = reverse(head);
        Node* temp;
        if(newHead->data != 9){
            newHead->data = newHead->data + 1;
            return reverse(newHead);
        }
        else{
            temp = newHead;
            while(temp->data==9 && temp->next!=NULL){
                temp = temp->next;
            }
            temp -> data = temp->data + 1;
        }
        Node* temp1 = newHead;
        while(temp1!= temp){
            temp1->data = 0;
            temp1 = temp1->next;
        }
        head = reverse(newHead);
        return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends