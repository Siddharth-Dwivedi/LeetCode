class Solution {
public:
    int maximum69Number (int num) {
        int index =0;
        int c = 0;
        int n = num;
        while(n>0){
            int r = n%10;
            index++;
            if(r==6){
                c=index;
            }
            n = n/10;
        }
        return num + 3*pow(10,c-1);
    }
};