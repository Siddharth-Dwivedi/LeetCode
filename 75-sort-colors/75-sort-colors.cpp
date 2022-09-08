class Solution {
public:
    void sortColors(vector<int>& nums) {
    int l = 0;
    for(int i =0;i<3;i++){
        for(int j = 0;j<nums.size();j++){
            if(nums[j]==i){
                int temp = nums[l];
                nums[l] =nums[j];
                nums[j] = temp;
                l++;
            }
        }
    }
    for(auto i:nums){
        cout<<i<<" ";
    }
}
};