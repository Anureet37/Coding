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
		int  x;
		cin>>x;
		string mat;
		cin>>mat;
		int value = mat[0]-'0';
		int count=1+value;
		for(int j=0; j<x; j++)
		{
			if(j==0)
			{
				cout<<"1";
			}
			else
			{
				value = mat[j]-'0';
				if(count==value+1)
				{
					cout<<"0";
					count=value;	
				}
				else
				{
					cout<<"1";
					count=value+1;
					}
			}	
		}
		cout<<"\n";	
	}
	
	return 0;

}
