class Solution {
public:
    bool checkZeroOnes(string s) {
        int m=0,n=0;
        int mx=INT_MIN,nx=INT_MIN;
        if(s.size()==0){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') m++;
            else if(s[i]=='0') n++;
            
            if(i>0 && s[i]=='0' && s[i-1]=='1'){
                mx = max(mx,m);
                m=0;
            }
            else if(i>0 && s[i]=='1' && s[i-1]=='0'){
                nx = max(nx,n);
                n=0;
            }
            if(i==s.size()-1){
                if(s[i]=='0') nx = max(nx,n);
                else if(s[i]=='1') mx = max(mx,m);
            }
        }
        if(mx>nx){
            return true;
        }
        return false;
    }
};