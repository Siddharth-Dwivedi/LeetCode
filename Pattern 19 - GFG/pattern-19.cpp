//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=2*n;i++){
            if(i<=n){
                for(int j=1;j<=2*n;j++){
                    if(j<=n-i+1 || j>=n+i){
                        cout<<"*";
                    }
                    else
                    cout<<" ";
                }
            }
            else{
                for(int j=1;j<=2*n;j++){
                    if(j<=i-n || j>2*n-i+n){
                        cout<<"*";
                    }
                    else
                    cout<<" ";
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