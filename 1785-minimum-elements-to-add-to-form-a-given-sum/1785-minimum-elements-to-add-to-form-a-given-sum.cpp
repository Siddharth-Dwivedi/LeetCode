class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {

        long long sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
             }
        if(sum==goal){
            return 0;
        }
        if(abs(limit) >= abs(goal)){
            return 1;
        };
        long long x = abs(sum - goal);
        if(x%limit==0){
            return x/limit;
        }
        return (x/limit)+1;
    }
};