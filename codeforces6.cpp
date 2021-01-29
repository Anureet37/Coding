#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int isPrimeNumber(int n) {
   int isPrime = 1;
	cout<<(int)pow((double)n,(double)0.5)<<"  "<<n<<"\n";
   for(int i = 2; i <= (int)pow((double)n,(double)0.5); i++) {
      if (n%i == 0) {
         isPrime=2;
         break;
      }
   }  
   return isPrime;
}
int main()
{
	int v; 
	std::cin>>v;
	vector<int> prime;
	prime.resize(10000*2+50);
//	cout<<" "<<prime[0]<<"\n";
	for(int i=0; i<v ;i++)
	{
		cout<<"case number"<<i<<"\n";
		int  d;
		cin>>d;
		int  b;
		b=d;
		long long a;
		long long m;
		while(1)
		{
			if(prime[1+b]==0)
			{
				int x= isPrimeNumber(1+b);
				prime[1+b]=x;
				if(x==1)
				{
					a=1+b;
					break;
					}	
				else
				b++;		
			}
			else
			{
				int x= prime[1+b];
				if(x==1)
				{
					a=1+b;
					break;
				}	
				else
					b++;
			}
		}
		while(1)
		{
			if(prime[1+b+d]==0)
			{
				int x= isPrimeNumber(1+b+d);
				prime[1+b+d]=x;
				if(x==1)
				{
					m=1+b+d;
					break;
					}	
				else
				b++;		
			}
			else
			{
				int x= prime[1+b+d];
				if(x==1)
				{
					m=1+b+d;
					break;
					}	
				else
					b++;
			}
		}
		cout<<a<<"=a m="<<m<<"\n";
		cout<<a*m<<"\n";
//		cout<<a*<<"\n";
		cout<<min(a*m,a*a*a)<<"\n";	
	}
	
	return 0;

}
