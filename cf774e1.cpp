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
			deque <int> dq;
			int x;
			cin>>x;
			dq.push_back(x);
			for(int i=1;i<n;i+=1)
			{
				cin>>x;
				if(x<dq.front())
				dq.push_front(x);
				else
				dq.push_back(x);
			}
			for(int i=0;i<n;i+=1)
			{
				cout<<dq[i]<<" ";
			}
			cout<<"\n";
		}
	return 0;
}
