//DAY 2
//Given a list of words, find all pairs of unique indices such that the concatenation of the two words is a palindrome.
//For example, given the list ["code", "edoc", "da", "d"], return [(0, 1), (1, 0), (2, 3)].

//Answer: sve all values in hashmap with index
//check for reverse string, without last elements forming palindrome, in the list
// for "aabc" possible value to add are "cbaa" "cba" and "cb"
#include <iostream> 
#include <unordered_map> 
#include <vector>
#include <algorithm>
using namespace std; 
bool palindrome(string str)
{
	for(int i=0; i<str.length()/2;i++)
	{
		if(str[i]!=str[str.length()-1-i])
		return false;
	}
	return true;
}
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
		for(int len=0; len<a.length();len++)
		{
			string postfix = a.substr(len, a.length());
			string prefix= a.substr(0, len); 
			if(palindrome(prefix))
			{
				index = hmap.find(postfix);									//string after removing len length element(group with palindrome) of reverse is present (doc for code == codedoc or bc +aabc)
				if(index!=hmap.end()&&(num!=index->second))
					answer.push_back(make_pair(num,index->second));
			}
		}
		
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
//time =O(n*c*c)  n for number of strings, c for each internal palindrome check, c for each prefix formed
//Space = O(n) for hashmap
