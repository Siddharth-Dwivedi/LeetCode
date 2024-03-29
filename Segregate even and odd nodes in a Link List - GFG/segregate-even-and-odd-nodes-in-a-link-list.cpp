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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* prevEven= NULL;
        Node* currEven= NULL;
        Node* prevOdd= NULL;
        Node* currOdd= NULL;
        Node* temp = head;
        Node* firstOdd = NULL;
        Node* firstEven = NULL;
        while(temp!=NULL){
            if(temp->data %2!=0){
                if(prevOdd==NULL){
                    firstOdd = temp;
                    prevOdd = temp;
                }
                else{
                    currOdd = temp;
                    prevOdd->next = currOdd;
                    prevOdd = currOdd;
                }
            }
            else{   
                if(prevEven == NULL){
                    firstEven = temp;
                    prevEven = temp;
                }
                else{
                    currEven = temp;
                    prevEven->next = currEven;
                    prevEven = currEven;
                }
            }
            temp = temp->next;
        }
        if(prevEven!=NULL)
            prevEven->next = firstOdd;
        if(prevOdd!=NULL)
            prevOdd->next = NULL;
        if(firstEven!=NULL)
            head = firstEven;
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends