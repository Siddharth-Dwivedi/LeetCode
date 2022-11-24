class Solution {
public:
    void subset_sum(vector<int> &ar, int i, vector<int> &v, vector<vector<int>> &ans){
    if(i==ar.size()){
        ans.push_back(v);
        return;
    }
    v.push_back(ar[i]);
    subset_sum(ar,i+1,v,ans);
    v.pop_back();
    subset_sum(ar,i+1,v,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        vector<int>v;
        subset_sum(nums,i,v,ans);
        return ans;
    }
};