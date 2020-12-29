//DAY 5
//Implement integer exponentiation. That is, implement the pow(x, y) function, where x and y are integers and returns x^y.
//Do this faster than the naive method of repeated multiplication.
//
//Answer : if y is divisible by 2 then muliply x^(y/2)) with itself
#include <iostream>
using namespace std;
long long exponent (int x, int y){
	if(y==0)
	  return 1;
	else if (y%2==1)
	  return  x*exponent(x, y-1);
	else
	{
		long long a= exponent(x, y/2);
		return a*a;
	}
};
int main(){
	int x=2;
	int y=10;
	cout<<exponent(x,y);
	return 	0;
};
