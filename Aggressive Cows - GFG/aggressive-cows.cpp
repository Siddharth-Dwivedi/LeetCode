//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(vector<int> &v,int n,int m,int mid){
    int c = v[0];
    int count=1;
    for(int i =0;i<v.size();i++){
        if(v[i]-c >= mid){
            count++;
            c = v[i];
        }
        if(count==m){
            return true;
        }
    }
    return false;
}

    int solve(int n, int m, vector<int> &v) {
    
        // Write your code here
        sort(v.begin(),v.end());
    int s = 1;
    int e = v[n-1]-v[0];
    int mid = s+(e-s)/2;
    int ans = 0;
    while(s<=e){
        if(isPossible(v,n,m,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends