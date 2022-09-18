class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {  
        // cout<<"hello";
        int firstr = 0;
        int lastr = n-1;
        int firstc = 0;
        int lastc = n-1;
        vector<vector<int> > v(n, vector<int> (n, n));
        int total = n*n;
        int count = 0;
        int k =1;
        while(count<total){
            for(int i =firstc;count<total && i<=lastc;i++){
                v[firstr][i]=k;
                k++;
                count++;
            }
            firstr++;
            for(int i =firstr;count<total && i<=lastr;i++){
                v[i][lastc]=k;
                k++;
                count++;
            }
            lastc--;
            for(int i =lastc;count<total && i>=firstc;i--){
                v[lastr][i]=k;
                k++;
                count++;
            }
            lastr--;
            for(int i =lastr;count<total && i>=firstr;i--){
                v[i][firstc]=k;
                k++;
                count++;

            }
            firstc++;
        }
        return v;
    }
};