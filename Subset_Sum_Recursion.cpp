#include<bits/stdc++.h>
using namespace std;

int subset_sum(int sum,vector<int> ar,int i,vector<int> &v){
    if(i==ar.size()){
        cout<<sum<<" ";
        return 0;
    }
    v.push_back(ar[i]);
    sum+=ar[i];
    subset_sum(sum,ar,i+1,v);
    v.pop_back();
    sum-=ar[i];
    subset_sum(sum,ar,i+1,v);
    return 0;
} 
int main(){
    vector<int> ar={3,1,4};
    int sum=0;
    int i=0;
    vector<int> v;
    subset_sum(sum,ar,i,v);
}