// class Solution {
// public:
//     bool checkPalindrome(int n){
//         int r=n;
//         int sum=0;
//         int i=0;

//         while(n>0){
//             int k = n%10;
//             sum=sum*10 +k;
//             n = n/10;
//         }
//         return sum==r;
//     }
    
//     bool checkprime(int n){
//         if(n<=1){
//             return false;
//         }
//         else{
//             for(int i=2;i<n;i++){
//                 if(n%i==0){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
    
//     int smallestNo(int n){
//         if(checkPalindrome(n)){
//             if(checkprime(n)){
//                 return n;
//             }
//         }
//         return smallestNo(n+1);
//     }
    
//     int primePalindrome(int n) {
//          if (1e7 <= n && n <= 1e8)
//         return 100030001;
//         int a = smallestNo(n);
//         return a;
//     }

// };


class Solution {
public:
    bool checkPalindrome(int n){
        int r=n;
        int sum=0;
        int i=0;

        while(n>0){
            int k = n%10;
            sum=sum*10 +k;
            n = n/10;
        }
        return sum==r;
    }
    
    bool checkprime(int n){
        if(n<=1){
            return false;
        }
        else{
            for(int i=2;i<n;i++){
                if(n%i==0){
                    return false;
                }
            }
        }
        return true;
    }
    
    int primePalindrome(int n) {
        if (1e7 <= n && n <= 1e8)
        return 100030001;
        int i;
        for(i=n;i<2*pow(10,9);i++){
            if(checkPalindrome(i)){
                if(checkprime(i))
                return i;
            }
        }
        return i;
    }

};