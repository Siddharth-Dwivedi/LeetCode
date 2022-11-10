class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=0;i<s.size();i++)
            if(abs(s[i]-s[i+1])==0)
                s.erase(i,2),i=max(-1,i-2);
        return s;
    }
};