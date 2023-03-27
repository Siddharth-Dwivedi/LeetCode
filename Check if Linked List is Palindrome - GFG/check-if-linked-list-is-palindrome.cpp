//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        stack<int> st;
        Node* temp = head;
        int len =0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        int half = len/2;
        if(len%2==0) half--;
        temp = head;
        while(temp!=NULL){
            if(half>=0){
                if(len%2!=0 && half == 0){
                    
                }
                else{
                st.push(temp->data);
                }
                half--;
            }
            else{
                if(st.top() == temp->data){
                    st.pop();
                }
            }
            temp = temp->next;   
        }
        if(st.size()==0){
            return true;
        }
        return false;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends