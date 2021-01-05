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
	for(int m=0; m<v ;m++)
	{
		int  x;
		cin>>x;
		vector<int> odd;
		vector<int>even;
		for(int j=0; j<x; j++)
		{
			int y;
			cin>>y;
			if(y%2==0)
				even.push_back(y);
			else
				odd.push_back(y);
		}
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end());
		int a=0; int b=0;
		int i=0; int j=0;
		int turn=1;
		while(i<even.size()||j<odd.size())
		{
			if(i<even.size()&&j<odd.size())
			{
				if(even[even.size()-1-i]>odd[odd.size()-j-1])
				{
					if(turn==1)
					{
						turn =2;
						a+=even[even.size()-1-i];
					}
					else
					{
						turn =1;
					}
					i++;
				}
				else
				{
					if(turn==2)
					{
						turn =1;
						b+=odd[odd.size()-1-j];
					}
					else
					{
						turn =2;
					}
					j++;
				}
			}
			else if(i<even.size())
			{
				if(turn==1)
					{
						turn =2;
						a+=even[even.size()-1-i];
					}
					else
					{
						turn =1;
					}
					i++;
			}
			else
			{
				if(turn==2)
					{
						turn =1;
						b+=odd[odd.size()-1-j];
					}
					else
					{
						turn =2;
					}
					j++;
			}
			
		}
		if(a>b)
		cout<<"Alice\n";
		else if(a==b)
		cout<<"Tie\n";
		else
		cout<<"Bob\n";
	}
	
	return 0;

}
