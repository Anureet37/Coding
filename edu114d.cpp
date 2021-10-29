#include <vector>
#include <math.h>
#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std;
using std::vector;
int main()
{
		int n,m,c;
		cin>>n;
		vector<vector<int>> a(n);
		unordered_map<string,int> map1;
		string ans="";
		for(int i=0;i<n;i+=1)
		{
			cin>>c;
			ans+=(c-1+'0');
			a[i].resize(c);
			for(int j=0;j<c;j+=1)
			{
				cin>>a[i][j];
			}
		}
		cin>>m;
		for(int i=0;i<m;i+=1)
		{
			string b="";
			int val;
			for(int j=0;j<n;j+=1)
			{
				cin>>val;
				b+=(val-1+'0');
			}
			map1[b]+=1;
		}
		cout<<ans<<"\n";
	return 0;
}
