class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())
    {
        return false;
    }
    vector<int> freqs(26,0);
    vector<int> freqg(26,0);
     int diff=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=goal[i])
        {
            diff++;
        }
        freqs[s[i]-'a']++;
        freqg[goal[i]-'a']++;
    }
    bool allunique=true;
    for(int i=0;i<26;i++)
    {
        if(freqs[i]!=freqg[i]) return false;
        if(freqs[i]>1) allunique=false;
    }
    
    return (diff==2 || (diff==0 && allunique==false));
    
    }
};