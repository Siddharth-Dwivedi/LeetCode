//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

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
// bool detect_loop(Node* &head)
//     {
//         // your code here
//         unordered_map<Node*,int> m;
//         Node* temp = head;
//         while(temp!=NULL){
//             m[temp]++;
//             if(m[temp]==2){
//                 head = temp;
//                 return true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }
    
bool detect_loop(Node* &head)
{
        // your code here
        Node* slow =head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                head = slow;
                return true;
            }
        }
        return false;
}

int count(Node* head){
    Node* temp = head;
    Node* temp1 = temp->next;
    int i = 1;
    while(temp1!=temp){
    // cout<<temp->data<<endl;
        i++;
        temp1 = temp1->next;
    }
    return i;
}

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    if(detect_loop(head)==true){
        // cout<<head->data<<endl;
        return count(head);
    }
    return 0;
}