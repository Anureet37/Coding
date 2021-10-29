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
		string s;
		cin>>s;
		int n=s.length();
		if(n!=1&&s[0]!=s[n-1])
			cout<<s.substr(0,n-1)<<s[0]<<"\n";
		else
		cout<<s<<"\n";
	}
	
	return 0;

}
