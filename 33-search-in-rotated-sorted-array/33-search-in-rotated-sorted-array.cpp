class Solution {
public:
    
    int getpivot(vector<int> v, int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(v[mid]>=v[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

    int binarySearch(int s,int e,vector<int> v,int target){
    int mid = s +(e-s)/2;
    while(s<=e){
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]<target){
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
        mid = s +(e-s)/2;
    }
    return -1;
}
    
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    int pivot = getpivot(nums,n);
    int ans = 0;
    if(target>=nums[pivot] && target<=nums[n-1]){
        ans = binarySearch(pivot,n-1,nums,target);
    }
    else{
        ans = binarySearch(0,pivot-1,nums,target);
    }
        return ans;
    }
};