#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int t; 
	std::cin>>t;
	for(int i=0; i<t ;i++)
	{
		int n;
		cin>>n;
		vector <int> vals;
		vector <int> sorts;
		vector <int> prefix;
		int min;
		for(int j=0; j<n;j++)
		{
			int v;
			cin>>v;
			vals.push_back(v);
			sorts.push_back(v);			
		}
		sort(sorts.begin(),sorts.end());
		min =sorts[0];
		prefix.push_back(sorts[0]);
		for(int j=1; j<n;j++)
		{
			if(min==sorts[j])
			prefix[prefix.size()-1]+=sorts[j];
			else
			{
				prefix.push_back(sorts[j]);
				min=sorts[j];
			}			
		}
		if(count==n||(prev!=-1&&prev<=count*min))
		{
			cout<<n<<"\n";
			for(int j=1; j<=n;j++)
			cout<<j<<" ";
			cout<<"\n";
		}
		else 
		{
			cout<<n-count<<"\n";
			for(int j=0; j<n;j++)
			{
				if(vals[j]!=min)
				cout<<j+1<<" ";
			}
			cout<<"\n";
		}
	}
	
	return 0;

}
