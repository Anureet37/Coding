#include <vector>
#include <math.h>
#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std;
using std::vector;

int main()
{
		int t;
		cin>>t;
		for(int j=0; j<t;j++)
		{
			int a=0,b=0,c=0;
			string s;
			cin>>s;
			for(int i=0;i<s.length();i+=1)
			{
				if(s[i]=='A')
				a+=1;
				else if(s[i]=='B')
				b+=1;
				else
				c+=1;
			}
			if(b==a+c)
			cout<<"Yes\n";
			else
			cout<<"No\n";
		}
	return 0;
}
