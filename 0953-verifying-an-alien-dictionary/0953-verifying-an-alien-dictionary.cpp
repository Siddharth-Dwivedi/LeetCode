class Solution {
public: 
bool isAlienSorted(vector<string> words, string order) {
        int mapping[26];
        for (int i = 0; i < 26; i++)
            mapping[order[i] - 'a'] = i;
        for (string &w : words)
            for (char &c : w)
                c = mapping[c - 'a'];
        return is_sorted(words.begin(), words.end());
    }
};

// class Solution {
// public:
//     bool isAlienSorted(vector<string>& words, string order) {
//         unordered_map<int,int> mp;
//         int i=1;
//         for(auto it:order){
//             mp[it]=i;
//             i++;
//         }
//         for(auto it:words){
//             for(int j=1;j<it.size();j++){
//                 if(mp[it[j]]<mp[it[j-1]]){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };