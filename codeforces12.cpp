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
		int  x,y;
		cin>>x>>y;
		for(int j=0; j<x; j++)
		{
			long long z;
			cin>>z;
			int k= z%y;
			if(k!=0&&z<10*y)
			{
				int m=0;
				for(m=1;m<10;m++)
				{
					if((k+y*m)%10==0)
						break;
				}
				if(y*m+k>=z||m*y==z||m==10)
					cout<<"NO\n";
				else
					cout<<"YES\n";
			}
			else
				cout<<"YES\n";
		}
	}
	
	return 0;

}
