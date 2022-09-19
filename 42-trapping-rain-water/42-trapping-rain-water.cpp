class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0;
        int r = h.size()-1;
        int leftmax = 0;
        int rightmax = 0;
        int res =0;
        while(l<=r){
            if(h[l]<=h[r]){
                if(h[l] >= leftmax) leftmax = h[l];
                else res += leftmax - h[l];
                
                l++;
            }
            else{
                if(h[r] >= rightmax) rightmax = h[r];
                else res += rightmax - h[r];
                
                r--;
            }
        }
        return res;
    }
};