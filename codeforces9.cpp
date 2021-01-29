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
		int n,m;
		cin>>n>>m;
		vector <int> a;
		vector <int> b2;
		vector <int> c1;
		int count=0;
		int total=0;
		int cost=0;
		for(int j=0; j<n;j++)
		{
			int n;
			cin>>n;
		 	a.push_back(n);
		 	total+=n;
		 } 
		 for(int j=0; j<n;j++)
			{
				int n;
				cin>>n;
			 	if(n==2)
			 		b2.push_back(a[j]);
				else
				 c1.push_back(a[j]);
			 } 
		 if(total>=m)
		 {
			 sort(b2.begin(),b2.end());
			 sort(c1.begin(), c1.end());
			 int i=(int)b2.size()-1;
			 int j=(int)c1.size()-1;
			 while(count<m)
			 {
			 	if(j>=0)
			 		{
			 			count+=c1[j];
			 			cost+=1;
			 			j--;
					 }
					else
					{
						count+=b2[i];
			 			cost+=2;
			 			i--;
					}
			 }
			 int cost2= cost;
			 while(i>=0&&j<(int)c1.size()-1)
			 {
			 	count+=b2[i];
			 	i--;
			 	cost2+=2;
			 	if(count>m)
			 	{
			 		if(j<(int)c1.size()-1)
			 			{
			 				while(count-c1[j+1]>=m&&j<(int)c1.size()-1)
				 			{
				 				count-=c1[j+1];
				 				cost2-=1;
				 				j++;
							 }
							 	
						}
					if(cost2<cost)
						cost=cost2;
				 }
			 }
			 if(count>m)
			 	{
			 		if(j<((int)c1.size()-1))
			 			{
			 				while(count-c1[j+1]>=m&&j<(int)c1.size()-1)
				 			{
				 				count-=c1[j+1];
				 				cost2-=1;
				 				j++;
							 }
						}
					if(cost2<cost)
						cost=cost2;
				 }
			 cout<<cost<<"\n";
		 }
		 else
		 cout<<"-1\n";
		 
	}
	
	return 0;

}
