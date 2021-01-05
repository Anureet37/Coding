#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std;
using std::vector;
struct node
    {
        char key;
        int value;
    };
int main()
{
		int n;
		cin>>n;
		for(int j=0; j<n;j++)
		{
			int x, y;
			cin>>x>>y;
			if(x%y!=0)
			cout<<x<<"\n";
			else{
				int ans=1;
					for(int i=2; i<x;i++)
					{
						if(x%i==0)
						{
							if((x/i)%y!=0)
							{
								ans=x/i;
								break;
							}
						}
					}
					cout<<ans<<"\n";
			}
		
			
		}
		//	int v; 
//	std::cin>>v;
//	for(int i=0; i<v ;i++)
//	{
//		int n; 
//		std::cin>>n;
//		unordered_map<char, int> hash; 
//		int flag=0;
//		for(int j=0; j<n;j++){
//			string input;
//			cin>>input;
//			for(int k=0; k<input.length();k++)
//			{
//					if(hash.find(input[k])==hash.end())
//					{
//						hash[input[k]]=1;
//					}
//					else
//					{
//						hash[input[k]]++;
//					}
//			}
//		}
//		unordered_map<char, int>:: iterator p; 
//		for(p =hash.begin(); p!=hash.end();p++)
//		{
////			cout<<hash[k].key<<" "<<hash[k].value<<"\n";
//			if(p->second%n!=0)
//			{
//				flag=1;
//				break;
//			}
//		}
//		if(flag==1)
//		cout<<"NO\n";
//		else
//		cout<<"YES\n";
//	}
//	return 0;
	return 0;
}
