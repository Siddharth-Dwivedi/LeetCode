class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int ans = 0;
        if(s1.length()!= s2.length()) return -1;
        int xy = 0 ,yx=0;
        
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='x' && s2[i]=='y') xy++;
            if(s1[i]=='y' && s2[i]=='x') yx++;
        }
        ans += xy/2 + yx/2;
        xy =xy%2;
        yx =yx%2;
        if(xy==yx){
            ans += 2*xy;
        }else{
            ans=-1;
        }

        return ans;
    }
};