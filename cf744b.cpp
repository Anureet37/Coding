#include <vector>
#include <math.h>
#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std;
using std::vector;

int main()
{
		int t;
		cin>>t;
		for(int j=0; j<t;j++)
		{
			int n;
			cin>>n;
			long long x;
			priority_queue<pair<long long,int>> pq;
			vector<int> arr(n);
			for(int i=0;i<n;i+=1)
			{
				cin>>x;
				pq.push({x,i});
				arr[i]=x;
			}
			vector<vector<int>> ans;
			vector<int> sub(n,0);
			for(int i=0;i<n;i+=1)
			{
				int x=pq.top().second;
				pq.pop();
				for(int j=x+1;j<n;j+=1)
				sub[j]+=1;
				x-=sub[x];
				if(x<n-i-1)
				ans.push_back({x,n-i-1,1});	
			}
			cout<<ans.size()<<"\n";
			for(int i=0;i<ans.size();i+=1)
				cout<<ans[i][0]+1<<" "<<ans[i][1]+1<<" "<<ans[i][2]<<"\n";
		}
	return 0;
}
