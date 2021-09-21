#include <vector>
#include <math.h>
#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std;
using std::vector;
int main()
{
		int n,m;
		cin>>n;
		vector<long long> a(n);
		long long total=0;
		for(int i=0;i<n;i+=1)
		{
			cin>>a[i];
			total+=a[i];
		}
		cin>>m;
		vector<long long> x(m);
		vector<long long>y(m);
		for(int i=0;i<m;i+=1)
		{
			cin>>x[i]>>y[i];
		}
		sort(a.begin(),a.end());
		for(int i=0; i<m;i++)
		{
			int val=lower_bound(a.begin(),a.end(),x[i])-a.begin();
			if(val==n)
			{
				cout<<x[i]-a[n-1]+max(y[i]-total+a[n-1],0ll)<<"\n";
			}
			else{
				if(val==0)
					cout<<max(y[i]-total+a[0],0ll)<<"\n";
				else
					cout<<min(max(x[i]-a[val],0ll)+max(y[i]-total+a[val],0ll),max(x[i]-a[val-1],0ll)+max(y[i]-total+a[val-1],0ll))<<"\n";
			}
				
		}
	return 0;
}
