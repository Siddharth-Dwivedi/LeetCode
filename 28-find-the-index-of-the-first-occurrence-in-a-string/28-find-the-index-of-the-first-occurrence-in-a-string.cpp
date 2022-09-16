class Solution {
public:
    int strStr(string h, string n){

    if(h.size()<n.size()) return -1;
    for(int i =0;i<h.size();i++){
        int x = n.size()-1;
        int flag =0;
        if(h[i]==n[0]){
            int j = i+1;
            int k = 1;
            while(x--){
                if(h[j]!=n[k]){
                    flag = 1;
                    break;
                }
                j++;
                k++;
            }
            if(flag ==0) return i;
        }
    }
    return -1;
}
};