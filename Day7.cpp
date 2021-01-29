//Day 8
//Given two strings A and B, return whether or not A can be shifted some number of times to get B.
//For example, if A is abcde and B is cdeab, return true. If A is abc and B is acb, return false.
//
//Answer: concatenate a with a and find substring O(n^2) for concatenation


#include<iostream>
using namespace std;

int main(){
	string a;
	string b;
	cin>>a>>b;
	if(a.length()!=b.length())
		cout<<"false";
	else{
	string c;
	c=a+a;
	size_t found = c.find(b);
	if (found!=string::npos)
    	std::cout << a<<" can be rotated to get "<< b<<"\n";
    else
    	std::cout << a<<" cannot be rotated to get "<< b<<"\n";
	}
}
