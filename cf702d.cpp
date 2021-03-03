#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
void height(vector<int> & vals, int start, int end, vector<int>&h)
{
	if(end<start)
	return ;
	else
	{
		int max=vals[start];
		int ind=start;
		h[start]++;
		for(int i=start+1; i<=end;i++)
		{
			if(vals[i]>max)
			{
				ind=i;
				max=vals[i];
			}
			h[i]++;
		}
		h[ind]--;
//		cout<<"in with start="<<start<<" end="<<end<<" ind="<<ind<<"\n";
//		for(int j=0; j<vals.size();j++)
//		{
//			cout<<h[j]<<" ";
//		}
//		cout<<"\n";
		height(vals, start, ind-1,h);
		height(vals,ind+1,end,h);
		
	}
}
int main()
{
	int t; 
	std::cin>>t;
	for(int i=0; i<t ;i++)
	{
		int n;
		cin>>n;
		vector <int> vals;
		vector <int> h;
		h.resize(n);
		for(int j=0; j<n;j++)
		{
			int v;
			cin>>v;
			vals.push_back(v);
		}
		height(vals,0, n-1,h);	
		for(int j=0; j<n;j++)
		{
			cout<<h[j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;

}
