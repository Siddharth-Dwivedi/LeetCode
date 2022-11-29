class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        int n = m.size();
        
        vector<vector<int>> answer(2);
        unordered_map<int,int> mp;
        for(int i=0;i<m.size();i++){
            mp[m[i][1]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                answer[1].push_back(it.first);
            }
        }
        for(int i=0;i<m.size();i++){
            if(mp.find(m[i][0])==mp.end() && mp[m[i][0]]==0){
                mp[m[i][0]]++;
                answer[0].push_back(m[i][0]);
            }
        }
        sort(answer[0].begin(),answer[0].end());
        sort(answer[1].begin(),answer[1].end());
        return answer;
    }
};