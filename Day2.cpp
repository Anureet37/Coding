//DAY 2
//Given a list of words, find all pairs of unique indices such that the concatenation of the two words is a palindrome.
//For example, given the list ["code", "edoc", "da", "d"], return [(0, 1), (1, 0), (2, 3)].

//Answer: sve all values in hashmap with index
//check for reverse string and string without last element in the list
#include <iostream> 
#include <unordered_map> 
#include <vector>
#include <algorithm>
using namespace std; 
  
vector <pair<int,int>> pairs(vector <string>& initial)
{
	vector <pair<int,int>> answer;
	unordered_map<string, int> hmap; 
	for(int num=0; num<initial.size();num++)
  	    hmap[initial[num]] = num;
	for(int num=0; num<initial.size();num++)
	{
		string a= initial[num];
		reverse(a.begin(), a.end()); 
		unordered_map<string, int>::iterator index = hmap.find(a);
		if(index!=hmap.end()&&(num!=index->second))				//reverse string is present (edoc for code == codeedoc)
			answer.push_back(make_pair(num,index->second));
		a= a.substr(1, a.length());
		index = hmap.find(a);									//string after removing first element of reverse is present (doc for code == codedoc)
		if(index!=hmap.end()&&(num!=index->second))
			answer.push_back(make_pair(num,index->second));
	}
	return answer;
}
int main() 
{ 
	vector <pair<int,int>> answer;
  	vector<string> initial;
  	initial.push_back("code");
  	initial.push_back("edoc");
  	initial.push_back("da");
  	initial.push_back("d");
  	answer=pairs(initial);
  	for(int i=0; i<answer.size();i++)
  	{
  		cout<<answer[i].first<<","<<answer[i].second<<"\n";
	  }
  	return 0;
} 
