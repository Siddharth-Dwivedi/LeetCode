class Solution {
public:
    int countSegments(string s) {
        int i=0;
        int count=0;
        while(i<s.size()){
            if(i>0 && s[i]==' '&& s[i-1]!=' '){
                count++;
            }
            i++;
        }
        if(s.size()>0){
        if(s[s.size()-1]!=' '){
            return count+1;
        }
        }
        return count;
    }
};