class Solution {
public:
    string rev(string s,int start,int end){
        while(start<=end)
        {
            swap(s[start++],s[end--]);
        }
        return s;
        
    }
    string reverseStr(string s, int k) {
        int len=s.length();
        int start;
        int end;

        if (len<k)
        {
            return rev(s,0,len-1);
        }
        for (int i = 0; i < len;)
        {
            if((len-i)<k){
                s=rev(s,i,len-1);
                break;
            }
            start=i;
            end=i+k-1;
            s=rev(s,start,end);
            i+=(2*k);
        }
        return s;
    }
};