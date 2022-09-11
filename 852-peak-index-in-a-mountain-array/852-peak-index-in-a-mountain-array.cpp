class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int r = arr.size()-1;
        int mid = l+(r-l)/2;
        while(l<r){
            mid = l+(r-l)/2;
            if(arr[mid]<arr[mid+1]){
                l = mid + 1;
            }
            else{
                r = mid;
            }
            mid = l+(r-l)/2;
        }
        return mid;
    }
};