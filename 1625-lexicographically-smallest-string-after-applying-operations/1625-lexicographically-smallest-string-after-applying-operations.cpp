class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        unordered_set<string> seen;
        queue<string> q;
        q.push(s), seen.insert(s);
        
        function<string(string, int)> rotate = [](string s, int r)->string {
            return s.substr(r) + s.substr(0, r);
        };
        function<string(string, int)> add = [](string s, int a)->string {
            for(int i = 1; i < s.size(); i += 2) s[i] = (s[i]-'0'+a)%10 + '0';
            return s;
        };

        string res = s;
        while(!q.empty()) {
            string t = q.front(); q.pop();
            res = min(res, t);

            string rr = rotate(t, b), aa = add(t, a);
            if(seen.find(rr) == seen.end()) q.push(rr), seen.insert(rr);
            if(seen.find(aa) == seen.end()) q.push(aa), seen.insert(aa);
        }
        return res;
    }
};