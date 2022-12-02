class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        set<char> st1,st2;
        map<char,int> mp1,mp2;
        for(auto val:word1)
        {
            st1.insert(val);
            mp1[val]++;
        }
        for(auto val:word2)
        {
            st2.insert(val);
            mp2[val]++;
        }
        map<int,int>check1,check2;
        for(auto val:mp1)
        {
            check1[val.second]++;
        }
        for(auto val:mp2)
        {
            check2[val.second]++;
        }
        return (st1==st2)&&(check1==check2);
    }
};