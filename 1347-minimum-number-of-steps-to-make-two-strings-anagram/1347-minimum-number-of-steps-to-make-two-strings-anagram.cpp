class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> p,q;
          int a=0;
        for(auto i: s)
            p[i]++;
        for(auto i : t)
            q[i]++;
        for(auto i : q)
        {
            if(i.second<p[i.first])
                a+=abs(i.second-p[i.first]);           
        }        
        for(auto i: p)
        {
            if(q[i.first]==0)
                a+=p[i.first];
        }        
        return a;
    }
};
