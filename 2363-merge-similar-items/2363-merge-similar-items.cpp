class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> m;
        vector<vector<int>> v;
        for(int i=0;i<items1.size();i++){
            m[items1[i][0]]=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            m[items2[i][0]]+=items2[i][1];
        }
        for(auto i: m){
            v.push_back({i.first,i.second});
        }
        return v;
    }
};