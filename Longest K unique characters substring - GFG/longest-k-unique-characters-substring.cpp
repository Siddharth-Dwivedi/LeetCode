//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int i = 0;
        int j = 0;
        int n = s.size();
        unordered_map<char,int> m;
        int maxi = -1;
        while(j<n){
            m[s[j]]++;
            if(m.size()<k){
                j++;
            }
            else if(m.size()== k){
                maxi  = max(maxi, j-i+1);
                j++;
            }
            else if(m.size()>k){
                while(m.size()>k){
                    if(m[s[i]]==1){
                        m.erase(s[i]);
                    }
                    else{
                        m[s[i]]--;
                    }
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends