class Solution {
public:
	void decryptAux(vector<int>&code,int k){
		int sum = 0;
		vector<int> tmp = code;
		int n = code.size();
		for(int i = 0; i < code.size()+k;i++){
			sum += tmp[i%n];
			if(i >= k){
				sum -= tmp[i-k];
				code[i-k] = sum;
			}
		}
	}

	vector<int> decrypt(vector<int>& code, int k) {
		if(k == 0)
			return vector<int>(code.size(),0);

		if(k < 0)
			reverse(code.begin(),code.end());

		decryptAux(code,abs(k));

		if(k < 0)
			reverse(code.begin(),code.end());

		return code;
	}
};