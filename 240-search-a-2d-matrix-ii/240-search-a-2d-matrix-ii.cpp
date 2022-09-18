class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIdx = 0;
        int colIdx = col-1;
        while(rowIdx < row && colIdx >=0){
            int e = matrix[rowIdx][colIdx];
            if(e==target){
                return true;
            }
            if(e<target){
                rowIdx++;
            }
            else{
                colIdx--;
            }
        }
        return 0;
    }
};