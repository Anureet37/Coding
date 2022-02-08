#include <iostream>
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
			vector<int> l(n,0);
			vector<int> r(n,0);
			vector<long long> cost(n,0);
			for(int i=0;i<n;i+=1){
				cin>>l[i]>>r[i]>>cost[i];
			}
			long long minl=l[0];
			long long maxr=r[0];
			long long lcost=INT_MAX;
			long long rcost=INT_MAX;
			long long common=cost[0];
			cout<<cost[0]<<"\n";
			for(int i=1;i<n;i+=1){
				if(l[i]<minl)
				{
					minl=l[i];
					if(r[i]<maxr)
						{
							rcost=min(common,rcost);
							lcost=cost[i];
							common=INT_MAX;
						}
						else if(maxr==r[i])
						{
							rcost=min(common,rcost);
							common=cost[i];
							lcost=cost[i];
							rcost=min(cost[i],rcost);
						}
						else{
							maxr=r[i];
							common=cost[i];
							lcost=cost[i];
							rcost=cost[i];
						}
				}	
				else if(l[i]==minl)
				{
					if(r[i]<maxr)
						{
							lcost=min(lcost,cost[i]);
						}
						else if(maxr==r[i])
						{
							common=min(common,cost[i]);
							lcost=min(lcost,cost[i]);
							rcost=min(rcost,cost[i]);
						}
						else{
							maxr=r[i];
							lcost=min(lcost,common);
							common=cost[i];
							rcost=cost[i];
						}
				}
				else{
					if(r[i]==maxr)
					{
						rcost=min(rcost,cost[i]);
					}
					else if(maxr<r[i])
					{
						maxr=r[i];
						lcost=min(lcost,common);
						rcost=cost[i];
						common=INT_MAX;
					}
				}
				cout<<min(common,lcost+rcost)<<"\n";
			}
		}
	return 0;
}
