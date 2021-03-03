#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int v; 
	std::cin>>v;
	for(int i=0; i<v ;i++)
	{
		int  n;
		cin>>n;
		int c0=0;
		int c1=0;
		int c2=0;
		int y=n/3;
		int count=0;
		for(int j=0; j<n; j++)
		{
			int val;
			cin>>val;
			if(val%3==0)
			{
				c0++;
			}
			else if(val%3==1)
			{
				c1++;
			}	
			else
			c2++;
		}
		while(c0!=c1||c1!=c2||c2!=c0){
			if(c0>y)
		{
			c1+=(c0-y);
			count+=(c0-y);
			c0=y;
		}
		else if(c1>y)
		{
			c2+=(c1-y);
			count+=c1-y;
			c1=y;
		}
		else if(c2>y)
		{
			c0+=(c2-y);
			count+=(c2-y);
			c2=y;
		}
//		cout<<"c1="<<c1<<" c2="<<c2<<" c0="<<c0<<"\n";
		}
		
		
		cout<<count<<"\n";	
	}
	
	return 0;

}
