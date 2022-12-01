class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int j = arr.size()-1;
        int ind;
        int flag=0;
        vector<int> v;
        while(j>0){
            int max= arr[j];
            for(int i=j-1;i>=0;i--){
                if(arr[i]>max){
                    max = arr[i];
                    flag = 1;
                    ind = i;
                }      
            }
            if(flag==1 && ind!=0){
                reverse(arr.begin(),arr.begin()+(ind+1));
                v.push_back(ind+1);
            }
            if(flag==1){
                reverse(arr.begin(),arr.begin()+(j+1));
                v.push_back(j+1);
                flag=0;
            }
            j--;
        }
        return v;
    }
};