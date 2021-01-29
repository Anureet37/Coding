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
	for(int i=0; i<v ;i++)
	{
		int  x,y;
		cin>>x;
		vector<long long> mat;
		mat.resize(x);
		for(int j=0; j<x; j++)
		{
			cin>>mat[j];
		}
		vector<vector<long long>> andV( x , vector<long long>(x, 0)); 
		long long count =0;
		vector<vector<long long>> orV( x , vector<long long>(x, 0)); 
		for(int j=0; j<x; j++)
		{
				for(int k=0; k<x;k++)
				{
					andV[j][k]=(mat[k]&mat[j]);		
					orV[j][k]=mat[k]|mat[j];		
				}
		}
		vector<long long> ors;
		ors.resize(x);
		for(int j=0; j<x; j++)
		{
			ors[j]=0;
			for(int k=0; k<x;k++)
			{
				ors[j]= (ors[j] + orV[j][k])%((long long)pow((double)10,(double)9)+7);		
			}
		}
		for(int j=0; j<x; j++)
		{
				for(int k=0; k<x;k++)
				{
					long long z=  (((andV[j][k])%((long long)pow((double)10,(double)9)+7))*(ors[k]))%((long long)pow((double)10,(double)9)+7);
//					unsigned long long z= (((mat[k]&mat[j])*(mat[k]|mat[m]))%((long long)pow((double)10,(double)9)+7))%((long long)pow((double)10,(double)9)+7);	
					count=(count + z)%((long long)pow((double)10,(double)9)+7);			
				}
//				cout<<count<<"\n";
		}
//		cout<<"here";
//		count =0;
//		for(int j=0; j<x; j++)
//		{
//			for(int k=0; k<x;k++)
//			{
//					for(int m=0; m<x;m++)
//					{
//						long long z=  (((mat[k]&mat[j])%((long long)pow((double)10,(double)9)+7))*((mat[k]|mat[m])%((long long)pow((double)10,(double)9)+7)))%((long long)pow((double)10,(double)9)+7);
//	//					unsigned long long z= (((mat[k]&mat[j])*(mat[k]|mat[m]))%((long long)pow((double)10,(double)9)+7))%((long long)pow((double)10,(double)9)+7);	
//						count=(count + z)%((long long)pow((double)10,(double)9)+7);
//					}		
//			}
//			cout<<count<<"\n";
//			
//		}
		cout<<count%((long long)pow((double)10,(double)9)+7)<<"\n";	
	}
	
	return 0;

}
