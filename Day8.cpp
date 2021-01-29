//Day 8
//Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
//For example, given [100, 4, 200, 1, 3, 2], the longest consecutive element sequence is [1, 2, 3, 4]. Return its length: 4.
//Your algorithm should run in O(n) complexity.
//
//Solution : putting values in a unordered set if prev values exist then leave it else check for the consecutive values in while loop


#include<iostream>
#include <unordered_set>
#include<iterator>
using namespace std;

int main(){
	int num;
	cin>>num;
	unordered_set<int> h;
	for(int i=0; i<num;i++)
	{
		int y;
		cin>>y;
		h.insert(y);
	}
	int max=1;
	for(auto i:h)
	{
		if(h.find(i-1)==h.end())
		{
			int k=1;
			while(h.find(i+k)!=h.end())
			{
				k++;	
			}
			if(max<k)
			max=k;
		}
	}
	cout<<max;
	return 0;
}
