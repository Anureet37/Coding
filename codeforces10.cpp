#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
using std::vector;

int main()
{
	int v; 
	std::cin>>v;
	for(int i=0; i<v ;i++)
	{
		int a,b,k;
		cin>>a>>b>>k;
		vector <int> vals;
		vector<pair<int, int>> pairs;
		for(int j=0; j<k;j++)
		{
			int n;
			cin>>n;
			vals.push_back(n);
		 } 
		 for(int j=0; j<k;j++)
		{
			int n;
			cin>>n;
			pairs.push_back(make_pair(vals[j],n));
		 } 
		int count=0;
		 for(int j=1; j<k;j++)
		{
			for(int m=0;m<j;m++)
			{
				if(pairs[m].first!=pairs[j].first&&pairs[m].second!=pairs[j].second)
					count++;
			}
		 } 
		 cout<<count<<"\n";
	}
	return 0;

}
