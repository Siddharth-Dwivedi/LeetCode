class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int s = 0;
        int l = row*col -1;
        int mid = s+(l-s)/2;
        while(s<=l){
            int e = matrix[mid/col][mid%col];
            if(e==target){
                return 1;
            }
            else if(e<target){
                s= mid+1;
            }
            else{
                l = mid -1;
            }
            mid = s+(l-s)/2;
        }
        return 0;
    }
};