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
		long long  n;
		cin>>n;
		long long root= pow((double)n, (double)1/3);
		int flag=0;
		for(long long j=root+1; j>0;j--)
		{
			long long z=pow((double)(n-j*j*j), (double)1/3);
			if((z*z*z+j*j*j==n&&z!=0)||((z+1)*(z+1)*(z+1)+j*j*j==n))
			flag=1;
		}
		if(flag==1)
		cout<<"YES";
		else
		cout<<"NO";
		cout<<"\n";	
	}
	
	return 0;

}
