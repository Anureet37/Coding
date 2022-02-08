#include <iostream>
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
			int n,k;
			cin>>n>>k;
			if(k>(n+1)/2)
			cout<<"-1\n";
			else{
				for(int i=0;i<n;i+=1)
				{
					for(int j=0; j<n;j+=1)
					{
						if(k>0&&i%2==0&&i==j)
						{
							cout<<"R";
							k-=1;
						}
						else
						cout<<".";
					}
					cout<<"\n";
				}
			}
		}
	return 0;
}
