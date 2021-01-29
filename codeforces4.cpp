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
		long long c,x;
		cin>>c>>x;
		vector<long long> mat;
		mat.resize(c);
		long long sum=0;
		int flag=INT_MAX;
		long long y;
		int index=c;
		for(int j=0; j<c; j++)
		{
			int n=0;
			cin>>y;
			long long z;
			mat[j]=y;
			sum+=y;
			while(y%x==0&&y!=1&&n<=flag)
			{
				n++;
				y=y/x;
			}
			if(y%x!=0&&flag>n)
			{
				flag=n;
				index=j;
			}
		}
//		cout<<"flag="<<flag<<" index= "<<index<<"\n";
		for(int j=0; j<c; j++)
		{
			int n=0;
			long long z;
			y=mat[j];
			while(y%x==0&&y!=1&&((j<=index&&n<=flag)||(j>index&&n<flag)))
			{
				n++;
				y=y/x;
				sum+=mat[j];
			}
		}
		cout<<sum<<"\n";	
	}
	
	return 0;

}
