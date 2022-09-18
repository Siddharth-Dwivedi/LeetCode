class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int count = 0;
        int firstr = 0;
        int lastr = r-1;
        int firstc = 0;
        int lastc = c-1;
        int total = r*c;
        vector<int> v;
        while(count<total){
            for(int i =firstc;count<total && i<=lastc;i++){
                // cout<<matrix[firstr][i];
                v.push_back(matrix[firstr][i]);
                count++;
            }
            firstr++;
            for(int i =firstr;count<total && i<=lastr;i++){
                // cout<<matrix[i][lastc];
                v.push_back(matrix[i][lastc]);
                count++;
            }
            lastc--;
            for(int i =lastc;count<total && i>=firstc;i--){
                // cout<<matrix[lastr][i];
                v.push_back(matrix[lastr][i]);
                count++;
            }
            lastr--;
            for(int i =lastr;count<total && i>=firstr;i--){
                // cout<<matrix[i][firstc];
                v.push_back(matrix[i][firstc]);
                count++;
            }
            firstc++;
        }
        return v;
    }
};