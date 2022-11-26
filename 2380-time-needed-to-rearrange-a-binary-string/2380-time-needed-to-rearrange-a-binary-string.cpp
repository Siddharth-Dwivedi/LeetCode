class Solution {
public:
int secondsToRemoveOccurrences(string s) {
    int seconds = 0, changed = true;
    while(changed) {
        changed = false;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == '0' && s[i + 1] == '1') {
                swap(s[i], s[i + 1]);
                ++i;
                changed = true;
            }
        }
        seconds += changed;
    }
    return seconds;
}
 };


// class Solution {
// public:
//     int secondsToRemoveOccurrences(string s) {
//         int i=0,j=s.size()-1;
//         int count=0;
//         while(i<j){
//             if(s[i]!='0'){
//                 i++;
//             }
//             if(s[j]!='1'){
//                 j--;
//             }
//             if(s[i]=='0' && s[j]=='1'){
//                 swap(s[i],s[j]);
//                 count++;
//                 i++;
//                 j--;
                
//             }
//         }
//         return count;
//     }
// };