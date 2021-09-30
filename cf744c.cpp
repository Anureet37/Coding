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
			priority_queue<pair<int,int>> pq;
			int v;
			for(int i=0;i<n;i+=1)
			{
				cin>>v;
				if(v!=0)
				pq.push({v,i});
			}
			vector<pair<int,int>> ans;
			while (pq.size() >= 2) {
        pair<int,int>a1 = pq.top(); pq.pop();
        pair<int,int> a2 = pq.top(); pq.pop();
        if (a1.first > 1) pq.push({a1.first-1, a1.second});
        if (a2.first > 1) pq.push({a2.first-1, a2.second});
        ans.push_back( {a1.second, a2.second});
    }
			cout<<ans.size()<<"\n";
			for(int i=0;i<ans.size();i+=1){
				cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
			}
		}
	return 0;
}
