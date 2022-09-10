class Solution {
public:
    
    int firstPosition(vector<int> v,int key){
    int s = 0;
    int e = v.size()-1;
    int ans =-1;
    int flag =0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==key){
            flag++;
            ans = mid;
            e = mid-1;
        }
        else if(v[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    if(flag>0){
    return ans;
        }
        else{
            return -1;
        }
}
    
    int lastPosition(vector<int> v,int key){
    int s = 0;
    int e = v.size()-1;
    int ans =-1;
    int flag =0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==key){
            flag++;
            ans = mid;
            s = mid + 1;
        }
        else if(v[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
        if(flag>0){
    return ans;
        }
        else{
            return -1;
        }
}
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2);
        v[0] = firstPosition(nums,target);
        v[1] = lastPosition(nums,target);
        return v;
    }
};