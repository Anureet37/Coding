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
			long long p,a,b,c,x,y;
			cin>>p>>a>>b>>c>>x>>y;
			long long minval=min(a*x+b,a*y+c);
			cout<<p/minval<<"\n";
		}
	return 0;
}
