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
		long long x;
		cin>>x;
		while(x>1)
		{
			if(x%2!=0)
			break;
			x=x/2;
		}
		if(x>1)
		cout<<"YES";
		else
		cout<<"NO";
		cout<<"\n";	
	}
	
	return 0;

}
