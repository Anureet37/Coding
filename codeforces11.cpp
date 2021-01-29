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
		int count=1;
		int max=1;
		int z=0;
		for(int j=0; j<x; j++)
		{
			int y;
			cin>>y;
			if(y==z)
			{
				count++;
			}
			else{
				if(count>max)
				max=count;
				z=y;
				count=1;
			}	
		}
		if(count>max)
				max=count;
		cout<<max<<"\n";
	}
	
	return 0;

}
