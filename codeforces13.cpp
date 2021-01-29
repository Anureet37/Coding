#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_set>
using namespace std;
using std::vector;

int main()
{
	int v; 
	std::cin>>v;
	for(int i=0; i<v ;i++)
	{
		int  x;
		cin>>x;
		unordered_set <long long> vals;
		vector <long long> val;
		vector <long long> final;
		int flag=1;
		for(int j=0; j<2*x; j++)
		{	
			long long z;
			cin>>z;
			if(z%2==1)
			flag=0;
			if(vals.find(z)!=vals.end())
				val.push_back(z/2);
			else
				vals.insert(z);
		}
		if(val.size()!=x||flag==0)
		cout<<"NO\n";
		else
		{
			sort(val.begin(),val.end());
			long long count=0;
			int j;
			for(j=x;j>0;j--)
			{
//				cout<<"val value="<<val[j-1]<<" "<<count<<" val="<<val[j-1]-count<<"\n";
				if((val[j-1]-count)%j==0&&(val[j-1]-count)>0)
				{
//					cout<<(val[j-1]-count)<<" "<<j<<" "<<(val[j-1]-count)/j<<"\n";
					final.push_back((val[j-1]-count)/j);
					long long y;
					y= count + final[x-j];
					count=y;
//					cout<<count<<"\n";
					if(j!=x)
					{
//						cout<<final[x-j-1]<<" "<<final[x-j]<<"\n";
						if(final[x-j-1]<final[x-j]||final[x-j]<=0)
							break;
					}
				}
				else
				break;
//				cout<<count<<"\n";
			}
//			cout<<final[x-1]<<"\n";
			if(j!=0||final[x-1]==0)
			cout<<"NO\n";
			else
			cout<<"YES\n";
		}
	}
	
	return 0;

}
