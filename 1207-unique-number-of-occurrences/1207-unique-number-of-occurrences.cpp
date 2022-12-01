class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_map<int,int> mp;
        set<int> s;
        for(auto i:arr){
            m[i]++;
        }
        int count=0;
        for(auto it:m){
            s.insert(it.second);
            count++;
        }
        if(s.size()!=count)
            return false;
        return true;
    }
};