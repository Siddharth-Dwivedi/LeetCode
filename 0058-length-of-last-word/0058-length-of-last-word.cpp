class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int i = s.size()-1;
        int count=0;
        int flag =0;
        while(c!=1 || i>0){
            if((s[i]>=65&&s[i]<=90) || (s[i]>=97&&s[i]<=122)){
                flag=1;
                count++;
            }
            if(flag==1 && s[i]==' '){
                return count;
            }
            if(i==0){
                return count;
            }
            i--;
        }
        return count;
    }
};