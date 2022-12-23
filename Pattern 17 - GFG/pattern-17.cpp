//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
            int m1=1;
            int m2=0;
        for(int i=1;i<=n;i++){
            char k = 'A';
            int c1=m1;
            int c2=m2;
            int spaces =n-i;
            while(spaces>0){
                cout<<" ";
                spaces--;
            }
            while(c1>0){
                cout<<k;
                k++;
                c1--;
            }   
            k--;
            while(c2>0){
                k--;
                cout<<k;
                c2--;
            }
            m1++;
            m2++;
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