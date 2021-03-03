#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std;
int main()
{
		int t;
		cin>>t;
		for(int j=0; j<t;j++)
		{
			long long n, k;
			cin>>n>>k;
			if(k<n)
			{ 
				if(n%k==0)
				cout<<"1"<<"\n";
				else
				cout<<"2"<<"\n";
			}
			else
			{ 
				if(k%n==0)
				cout<<k/n<<"\n";
				else
				cout<<(k/n)+1<<"\n";
			}
		
			
		}
	return 0;
}
