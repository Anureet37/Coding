#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int v; 
	std::cin>>v;
	for(int i=0; i<v ;i++)
	{
		long long n,x;
		cin>>n>>x;
//		vector<long long> mat;
//		mat.resize(x);
		long long min=0;
		long long max=0;
		long long total=0;
		for(int j=0; j<n; j++)
		{
			long long y;
			cin>>y;
			if(y%x==0)
			min= min +y/x;
			else
			min =min+y/x+1;
			total= total+y;
		}
		if(total%x==0)
		max= total/x;
		else
		max= total/x+1;
		cout<<max<<" "<<min<<"\n";	
	}
	
	return 0;

}
