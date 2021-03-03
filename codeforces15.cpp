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
		int  n;
		cin>>n;
		int count=0;
		int min=0;
		for(int j=0; j<n; j++)
		{
			int y;
			cin>>y;
			if(j==0||y<min)
			{
				count=1;
				min=y;
			}
			else if(y==min){
				count++;
			}	
		}
		cout<<n-count<<"\n";
	}
	
	return 0;

}
