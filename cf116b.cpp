#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int v; 
	std::cin>>v;
	for(int j=0; j<v ;j+=1)
	{
		long long n,k;
		cin>>n>>k;
		vector<int> vals(n);
		for(int i=0;i<n;i+=1)
		{
			cin>>vals[i];
		}
		k+=1;
		long long ans=0;
		for(int i=0;i<n-1;i+=1)
		{
			int val=int(pow(10,vals[i+1]-vals[i]))-1;
			if(val<k){
				ans=int(pow(10,vals[i+1]))-1;
				k-=val;	
			}
			else{
				ans+=k*int(pow(10,vals[i]));
				k=0;
				break;
			}
//			cout<<i<<" "<<ans<<" "<<val<<" "<<k<<"\n";
		}
//		cout<<k<<" "<<pow(10,vals[n-1])<<" "<<k*intpow(10,vals[n-1])<<" "<<ans<<"\n";
		if(k>0)
		ans+=k*int(pow(10,vals[n-1]));
		cout<<ans<<"\n";
	}
	
	return 0;

}
