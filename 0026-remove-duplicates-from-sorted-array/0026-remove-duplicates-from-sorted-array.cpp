class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =1,j=1;
        int cele = nums[0];
        while(j!=nums.size()){
            if(nums[j]>cele){
                cele=nums[j];
                swap(nums[i],nums[j]);
                i++;
            }
             j++;
        }
        return i;
    }
};