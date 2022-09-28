class Solution {
public:
    
bool isPalindrome(string a){
	int i=0;
	int j=a.size()-1;
	while(i<=j){
		if(a[i]!=a[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}

    
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
		string a="";
		for(int j=i;j<s.size();j++){
			a+=s[j];
			if(isPalindrome(a)){
				count++;
			}
		}
	}
        return count;
    }
};