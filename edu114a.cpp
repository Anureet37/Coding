#include <vector>
#include <math.h>
#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std;
using std::vector;
int total;
void print(int n,int a, int b,string s){
	if(total==0)
	return ;
	if(a==0&&b==0)
	{
		cout<<s<<"\n";
		total-=1;
		return ;
	}
	if(a>0)
		print(n,a-1,b,s+'(');
	if(b>0&&n-a>n-b)
		print(n,a,b-1,s+')');
}
int main()
{
		int t;
		cin>>t;
		for(int j=0; j<t;j++)
		{
			long long n;
			cin>>n;
			total=n;
			print(n,n,n,"");
		}
	return 0;
}
