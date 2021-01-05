//DAY 5
//Implement integer exponentiation. That is, implement the pow(x, y) function, where x and y are integers and returns x^y.
//Do this faster than the naive method of repeated multiplication.
//
//Answer : if y is divisible by 2 then muliply x^(y/2)) with itself
#include <iostream>
#include <math.h>
using namespace std;
double exponent (double x, double y){
	int exponentval;
	double base;
	if(y<0)
	{
		base= (pow((double)x,(double)-1));
		exponentval=y*(-1);
	}
	else{
		base=x;
		exponentval=y;
	}
	if(exponentval==0)
	  return 1;
	else if (exponentval%2==1)
	  return  base*exponent(base, exponentval-1);
	else
	{
		double a= exponent(base, exponentval/2);
		return a*a;
	}
};
int main(){
	int x=2;
	int y = 10;
	cout<<exponent(x,y);
	return 	0;
};
