class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0;
        int count=0;
        string str="";
        while(i<s.size()){
            if(i>0 && s[i]==' '&& s[i-1]!=' '){
                count++;
            }
            if(i==s.size()-1){
                count++;
                i++;
            }
            if(count==k){
                str =s.substr(0,i);
                break;
            }
            i++;
        }
        return str;
    }
};