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
			long long n, k;
			cin>>n>>k;
			vector<long long> vals;
			long long sum=0;
			for(int i=0; i<n;i++)
			{
				long long y;
				cin>>y;
				vals.push_back(y);
			}
			int i=3;
			int count =0;
			sum = vals[0];
			for( i=1; i<n;i++)
			{
				cout<<vals[i]<<" "<<sum<<" "<<k<<"\n";
				if((vals[i]*100)>(k*sum))
				{
					long long m=(100*vals[i])/k - sum;
//					cout<<m<<"=m";
					count+=m;
					if((100*vals[i])%k!=0)
					count++;
					sum+=count;
				}
				sum = sum+ vals[i];
				cout<<"here"<<count<<"\n";
			}
			cout<<count<<"\n";
			
		}
	return 0;
}
