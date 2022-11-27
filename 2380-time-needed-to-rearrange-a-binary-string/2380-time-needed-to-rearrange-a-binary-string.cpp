class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int flag =0;
        int count=0;
        while(flag!=1){
            flag=1;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='0' && s[i+1]=='1'){
                    swap(s[i],s[i+1]);
                    i++;
                    flag=0;
                }
            }
            if(flag==0)
            count++;
        }
        return count;
    }
};