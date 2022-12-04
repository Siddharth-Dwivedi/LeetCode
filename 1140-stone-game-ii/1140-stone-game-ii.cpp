class Solution {
public:
    
    int solve(vector<int>piles, vector<int> sum, int idx, int m,vector<vector<int>>& dp){
        if(dp[idx][m]!=-1) return dp[idx][m];
        int lim = 2*m;
        int max_score = 0;
        for(int i=1;i<=lim;i++){
            if(idx+i<=piles.size()){
                int temp = solve(piles,sum,idx+i,max(m,i),dp);
                int score = sum[idx] - temp;
                max_score = max(max_score, score);
            }
        }
        return dp[idx][m]=max_score;
    }
    
    int stoneGameII(vector<int>& piles) {
        vector<int> sum(piles.size());
        sum[piles.size()-1] = piles[piles.size()-1];
        for(int i=piles.size()-2;i>=0;i--){
            sum[i] = sum[i+1] + piles[i];
        }
        vector<vector<int>> dp(101,vector<int>(2*piles.size()+1,-1));
        return solve(piles,sum,0,1,dp);
    }
};