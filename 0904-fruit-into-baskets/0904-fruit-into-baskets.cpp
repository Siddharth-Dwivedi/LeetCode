class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        int f=-1,s=-1;
        int l = 0,ll=0;
        int cf=0,cs=0;
        for(int i=0;i<fruits.size();i++){
            if(l==0 ||fruits[i]==fruits[i-1]) l++;
            else{
                ll = l;
                l = 1;
            }
            if(f+s==-2){
                f = fruits[i];
                cf++;
            }
            else if(s==-1){
                if(fruits[i]==f) cf++;
                else{
                    s = fruits[i];
                    cs++;
                }
            }
            else{
                if(fruits[i]==f) cf++;
                else if(fruits[i]==s) cs++;
                else{
                    f = fruits[i-1];
                    cf = ll;
                    s = fruits[i];
                    cs = 1;
                }
            }
            ans = max(ans,cf+cs);
        }
        return ans;
    }
};