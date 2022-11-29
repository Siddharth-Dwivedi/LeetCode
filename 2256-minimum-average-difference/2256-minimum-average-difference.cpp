class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            v[i]=sum;
        }
        int j=INT_MAX,min=INT_MAX;
        for(int i=0;i<n;i++){
            int c = i;
            int x = (v[i])/(c+1);
            int z;
            if(i!=n-1)
                 z = (v[n-1] - v[i])/(n-c-1);
            else
                 z = 0;
            int k = abs(x-z);
            if(k<min){
                min = k;
                j = i;
            }
        }
        return j;
    }
};