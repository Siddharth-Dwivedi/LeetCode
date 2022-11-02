#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,3,-7,4,6};
    int ans = INT_MIN;
    int sum =0;
    for(int i =0;i<5;i++){
        sum +=arr[i];
        ans = max(sum,ans);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<ans;
}