class Solution {
public:
   vector<pair<int,int>>v;
vector<vector<int>>dp;
int bestTeamScore(vector<int>& scores, vector<int>& ages) 
{
   int n=scores.size();  
   dp.resize(n+1,vector<int>(n+1,-1));
   for(int i=0;i<n;i++)
   {
     
	 v.push_back(make_pair(ages[i],scores[i]));	  
   }
   sort(v.begin(),v.end(),greater<pair<int,int>>());   
   int idx=0;
   int max_contributor=-1; 
   return fun(idx,max_contributor);
}
int fun(int idx,int max_cont)
{
	if(idx>=v.size())
	{
		return 0; 
	}
	if(dp[idx][max_cont+1]!=-1)
	{
		return dp[idx][max_cont+1];
	}
	
	if(max_cont==-1)
	{
		int choise1=v[idx].second + fun(idx+1,idx);
		int choise2=0 + fun(idx+1,max_cont);
		
		return dp[idx][max_cont+1] = max(choise1,choise2);
	}
	else if(max_cont !=-1 ) 
	{
		
		int choise1=INT_MIN;
		int choise2=INT_MIN;
		
		if(v[max_cont].first >=  v[idx].first and v[idx].second <= v[max_cont].second)
		{
			choise1=v[idx].second + fun(idx+1,idx);
		}
		choise2= 0 + fun(idx+1,max_cont);
		
		return dp[idx][max_cont+1] = max(choise1,choise2);
	}
	return -1; 
}
};