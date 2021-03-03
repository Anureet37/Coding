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
		int  n;
		cin>>n;
		int prev;
		int count=0;
		for(int j=0; j<n; j++)
		{
			int input;
			cin>>input;
			if(j==0)
			prev=input;
			else
			{
				if(prev>=input)
				{
					while(prev>2*input)
					{
						count++;
						if(prev%2==0)
						prev=prev/2;
						else
						prev=(prev+1)/2;
//							cout<<" prev="<<prev<<"\n";
					}
					prev=input;
				}
				else
				{
					int z;
					z=input;
					while(input>2*prev)
					{
						count++;
						if(input%2==0)
						input=(input)/2;
						else
						input=(input+1)/2;
//						cout<<" input="<<input<<"\n";
					}
					prev=z;
				}	
			}
//			cout<<prev<<"=prev "<<"count="<<count<<"\n";	
		}
		cout<<count<<"\n";	
	}
	
	return 0;

}
