//Day 4
//Implement division of two positive integers without using the division, multiplication, or modulus operators.
//Return the quotient as an integer, ignoring the remainder.
//
//Answer : doing similar to normal division but with bit manipulation

#include<iostream>
using namespace std;

long long divide(long long divisor, long long dividend)
{
	int sign =1;
	if((divisor>0&&dividend<0)||(divisor<0&&dividend>0))
	 sign= -1;
	long long divA =abs(divisor);
	long long  divdA = abs(dividend);
	long long quotient =0;
	for(int i=31; i>=0; i--)
	{
		if((divdA>>i)>=divA)
		{
			quotient |= 1<<i;
			divdA= divdA - (divA<<i);
		}
	}
	return quotient*sign;
}
int main()
{
	long long divisor;
	long long dividend;
	cout<<"input divisor and dividend resp\n";
	cin>>divisor>>dividend;
	long long quotient = divide(divisor, dividend);
	cout<<quotient;
	return 0;
}
