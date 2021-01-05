//Day 6
//Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), find the minimum number of rooms required.
//For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.

//Answer sort values


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
int num;
cin>>num;
vector<pair<int, int>>time;
for(int i=0; i<num ;i++)
{
	int start, end;
	cin>>start>>end;
	time.push_back(make_pair(start,end));
}
sort(time.begin(), time.end());
vector<int>end;
end.push_back(time[0].second);
int count=1;
for(int i=1; i<num ;i++)
{
	int j;
	for( j=0; j<end.size();j++)
	{
		if(end[j]<time[i].first)
		{
			end[j]=time[i].second;
			break;
		}
			
	}
	if(j==end.size())
	{
		end.push_back(time[i].second);	
		count++;	
	}
	sort(end.begin(),end.end());
}
cout<<count<<"\n";
return 0;	
};
