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
		long long  n;
		long long w;
		cin>>n;
		long long k;
		cin>>k;
			if(n%2==0)
			{
				if(k%n==0)
				cout<<n;
				else
				cout<<k%n;
			}
			else{
				k=k%(n*(n-1)/2);
				if(k==0)
				cout<<n-1;
				else{
						long long iter =k/n;
						if(k%n==0)
						iter--;
						long long p1=iter*n +(n+1)/2-iter;
						long long p2=iter*n +n-iter;
						long long temp;
//						cout<<"iter="<<iter <<"\n";
//						cout<<"p1 p2 k"<<p1<<" "<<p2<<" "<<k<<"\n";
						if(k>=p2)
						{
							temp=(n-p2%n+1+1+k-p2)%n;
							if(temp==0)
								cout<<n;
							else
								cout<<temp;
						}
						else if(k>=p1)
						{
							temp=(n-p1%n+1+1+k-p1)%n;
							if(temp==0)
								cout<<n;
							else
								cout<<temp;
						}
						else
						{
							temp=(n-p1%n+1-p1+k+n)%n;
							if(temp==0)
								cout<<n;
							else
								cout<<temp;
						}
				}
			}
		cout<<"\n";
	}
	
	return 0;

}
