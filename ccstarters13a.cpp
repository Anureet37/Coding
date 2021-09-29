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
			int n,p,v,x,y;
			cin>>n>>p>>x>>y;
			int total=0;
			for(int i=0;i<p;i+=1)
			{
				cin>>v;
				if(v==0)
				total+=x;
				else
				total+=y;
			}
			for(int i=p;i<n;i+=1)
				cin>>v;
			cout<<total<<"\n";
		}
	return 0;
}
