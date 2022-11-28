class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> v(3);
        vector<int> k(2);
        v[0]=a;
        v[1]=b;
        v[2]=c;
        sort(v.begin(),v.end());
        if(abs(v[0]-v[1])<2 && abs(v[1]-v[2])<2){
            k[0]=0;
            k[1]=0;
        }
        
         else if(v[1]-v[0]<2 && v[2]-v[1]>=2){
            k[0]=1;
            k[1]=v[2]-v[1]-1;
        }
        else if(v[1]-v[0]>=2 && v[2]-v[1]<2){
            k[0]=1;
            k[1]=v[1]-v[0]-1;
        }
        else if(v[1]-v[0]>=2 && v[2]-v[1]>=2){
            if(v[1]-v[0]==2 || v[2]-v[1]==2){
                k[0]=1;
            }
            else{
            k[0]=2;
            }
            k[1] = v[1]-v[0]-1 + v[2]-v[1]-1;
        }
        return k;
    }
};