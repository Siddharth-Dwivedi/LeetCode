class Solution {
public:
    
    
    bool isValid(string s) {
        unordered_map<char,int>symbol = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
        stack<char> st;
    for(char bracket:s){
         if(symbol[bracket]<0){
            st.push(bracket);
         }
         else{
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
            if(symbol[bracket] + symbol[top] != 0){
                return false;
            }
         }
    }
    if(st.empty()) return true;
    else return false;
    }
};