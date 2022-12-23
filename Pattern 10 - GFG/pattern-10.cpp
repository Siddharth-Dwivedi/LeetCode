//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        for(int i=0;i<2*n-1;i++){
            if(i<n){
                for(int j=0;j<n;j++){
                    if(j<=i){
                        cout<<"* ";
                    }
                    // else
                    //     cout<<" ";
                }
            }
            else{
                for(int j=0;j<n;j++){
                    if(j<2*n-1-i){
                        cout<<"* ";
                    }
                    // else{
                    //     cout<<" ";
                    // }
                }
            }
            cout<<endl;   
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends