class Solution {
public:
    string convertToTitle(int columnNumber) {
           string ans = "";
    while(columnNumber > 0) {
        columnNumber--;
        int a = columnNumber%26;
        char b = 'A'+a;
        
        ans += b;
        columnNumber /= 26;
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
    
    }
};