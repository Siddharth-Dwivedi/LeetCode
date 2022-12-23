//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int k=1;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                k=0;
            }
            else{
                k=1;
            }
            for(int j=1;j<=n;j++){
                if(j<=i){
                    if(k==1){
                        cout<<k<<" ";
                        k=0;
                    }
                    else if(k==0){
                        cout<<k<<" ";
                        k=1;
                    }
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