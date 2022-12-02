class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;// if both equals simply return true
                
        int n=s1.length();
        int i=0,j=n-1;
        
        while(i<n and s1[i]==s2[i]) i++;
        while(j>=0 and s1[j]==s2[j]) j--;
        if(i<j) swap(s1[i],s1[j]);
        return s1==s2;
    }
};