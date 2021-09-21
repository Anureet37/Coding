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
			long long a,b,c,m;
			cin>>a>>b>>c>>m;
			long long total=(a-1)+b-1+c-1;
			if(total<m)
			cout<<"No\n";
			else
			{
				long long maxval=max(c,max(a,b));
				total=total+3-maxval;
				if(maxval-total-1>m)
				cout<<"No\n";
				else
				cout<<"Yes\n";
			}
				
			
		}
	return 0;
}
