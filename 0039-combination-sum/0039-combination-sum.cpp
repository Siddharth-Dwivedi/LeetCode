class Solution {
public:
    
   void sum(vector<int>& c, int target, vector<int>&v, vector<vector<int>>&ans , int ind){
        if(ind==c.size()){
            if(target==0)
                ans.push_back(v);
            return;
        }
       if(c[ind]<=target){
           v.push_back(c[ind]);
           sum(c,target-c[ind],v,ans,ind);
           v.pop_back();
       }
       sum(c,target,v,ans,ind+1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sum(c, target,v,ans,0);
        return ans;
    }
};