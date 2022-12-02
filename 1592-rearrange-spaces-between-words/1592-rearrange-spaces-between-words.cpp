class Solution {
public:
    string reorderSpaces(string text) {
        int n = text.size();
        if (n <= 1) return text;
        vector<string> data;
        int sumSpace = 0;
        int pos = 0;
        while (pos < n) {
            if (text[pos] == ' ') {
                int temp = pos;
                while (text[temp] == ' ' && temp < n) {
                    sumSpace++;
                    temp++;
                }
                pos = temp;
            } else {
                string s = "";
                int temp = pos;
                while (text[temp] != ' ' && temp < n) {
                    s += text[temp];
                    temp++;
                }
                pos = temp;
                data.push_back(s);
            }
        }
        string ans = "";
        if ((data.size() - 1) == 0) {
            ans += data[0];
            ans.insert(ans.end(), sumSpace, ' ');
            return ans;
        }
        
        int space = sumSpace / (data.size() - 1);

        for (int i = 0; i < data.size(); i++) {
            ans += data[i];
            if (i < data.size() - 1) {
                ans.insert(ans.end(), space, ' ');
                sumSpace -= space; 
            }
        }

        if (sumSpace > 0) ans.insert(ans.end(), sumSpace, ' ');
        
        return ans;
    }
};