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
		int x;
		cin>>x;
		int z= x%2020;
		if(z>x/2020)
		cout<<"NO\n";
		else
		cout<<"YES\n";	
	}
	
	return 0;

}
