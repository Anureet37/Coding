#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// void knapSack(int W, vector<int> &val, int n, vector<int>&a, int & asum) 
// { 
//     int i, w; 
//     int K[n + 1][W + 1]; 
  
//     // Build table K[][] in bottom up manner 
//     for (i = 0; i <= n; i++) { 
//         for (w = 0; w <= W; w++) { 
//             if (i == 0 || w == 0) 
//                 K[i][w] = 0; 
//             else if (val[i - 1] <= w) 
//                 K[i][w] = max(val[i - 1] +  
//                     K[i - 1][w - val[i - 1]], K[i - 1][w]); 
//             else
//                 K[i][w] = K[i - 1][w]; 
//         } 
//     } 
  
//     // stores the result of Knapsack 
//     asum = K[n][W];
//     w = W; 
//     for (i = n; i > 0 && asum > 0; i--) {  
//         if (asum == K[i - 1][w])  
//             continue;         
//         else { 
//             a.push_back(val[i-1]);
//             val.erase(val.begin() + i-1);
//             asum = asum - val[i - 1]; 
//             w = w - val[i - 1]; 
//         } 
//     } 
//     cout<<"in knapsack\n";
// } 

// int main() {
// 	int x;
// 	cin>>x;
// 	for(int i=0; i<x;i++)
// 	{
// 	    int n,k;
// 	    cin>>n>>k;
// 	    vector <int> val;
// 	    vector <int> a;
// 	    vector <int> b;
// 	    int asum;
// 	    val.resize(n);
// 	    for(int j=0; j<n;j++)
// 	        cin>>val[j];
// 	    sort(val.begin(), val.end());
// 	    knapSack(k,val,n,a,asum);
// 	    cout<<"knapsack worked\n";
// 	    int count=a.size();
// 	    if(asum<k)
// 	    {
// 	        for(int j=0; j<0;j++)
//     	    {
//     	       if(asum+val[j]>k)
//     	       {
//     	           asum+=val[j];
//     	           a.push_back(val[j]);
//     	           val.erase(val.begin()+j);
//     	           count++;
//     	           break;
//     	       }
//     	    }
// 	    }
// 	    int bsum=0;
// 	    for(int j=val.size(); j>=0;j--)
// 	    {
// 	       if(bsum>k)
// 	         break;
// 	       bsum+=val[j];
// 	       val.erase(val.begin() + j);
// 	       count++;
// 	    }
// 	    if(bsum<k){
// 	        count=-1;
// 	    }
// 	    else
// 	    {
// 	        for(int j=0; j<a.size();j++)
//     	    {
//     	       if(a[j]<val[val.size()-1])
//     	        {
//     	            asum=asum + val[val.size()-1]-a[j];
//     	            a[j]=val[val.size()-1];
//     	            val.pop_back();
//     	            while(asum-a[0]>k)
//     	            {
//     	                a.erase(a.begin());
//     	                count--;
//     	            }
//     	        }
//     	    }
// 	    }
// 	    cout<<count<<"\n";
// 	}
// 	return 0;
// }int main() {
// 	int x;
// 	cin>>x;
// 	for(int i=0; i<x;i++)
// 	{
// 	    int n,k;
// 	    cin>>n>>k;
// 	    vector <int> val;
// 	    vector <int> a;
// 	    vector <int> b;
// 	    int asum;
// 	    val.resize(n);
// 	    for(int j=0; j<n;j++)
// 	        cin>>val[j];
// 	    sort(val.begin(), val.end());
// 	    knapSack(k,val,n,a,asum);
// 	    cout<<"knapsack worked\n";
// 	    int count=a.size();
// 	    if(asum<k)
// 	    {
// 	        for(int j=0; j<0;j++)
//     	    {
//     	       if(asum+val[j]>k)
//     	       {
//     	           asum+=val[j];
//     	           a.push_back(val[j]);
//     	           val.erase(val.begin()+j);
//     	           count++;
//     	           break;
//     	       }
//     	    }
// 	    }
// 	    int bsum=0;
// 	    for(int j=val.size(); j>=0;j--)
// 	    {
// 	       if(bsum>k)
// 	         break;
// 	       bsum+=val[j];
// 	       val.erase(val.begin() + j);
// 	       count++;
// 	    }
// 	    if(bsum<k){
// 	        count=-1;
// 	    }
// 	    else
// 	    {
// 	        for(int j=0; j<a.size();j++)
//     	    {
//     	       if(a[j]<val[val.size()-1])
//     	        {
//     	            asum=asum + val[val.size()-1]-a[j];
//     	            a[j]=val[val.size()-1];
//     	            val.pop_back();
//     	            while(asum-a[0]>k)
//     	            {
//     	                a.erase(a.begin());
//     	                count--;
//     	            }
//     	        }
//     	    }
// 	    }
// 	    cout<<count<<"\n";
// 	}
// 	return 0;
// }
int insert(int asum, int bsum, vector<int>&val, int n ,int k)
{
    cout<<"asum="<<asum<<" bsum="<<bsum<<" n="<<n<<" k="<<k<<"\n";
    if(asum>=k&&bsum>=k)
        return 0;
    else if(n<0)
        return val.size()+1;
    else if(asum>k&&bsum>k)
        return 0;
    else{
        int include=val.size()+1;
        if(asum<k)
		include=insert(asum+val[n], bsum,val,n-1,k)+1;
	    int exclude=val.size()+1;
	    if(bsum<k)
		exclude=insert(asum, bsum+val[n],val,n-1,k)+1;
		cout<<include<<"=include exclude="<<exclude<<" for n="<<n<<"\n";
	    if(include<exclude)
	    return include;
	    else
	    return exclude;
    }
}
int main() {
	int x;
	cin>>x;
	for(int i=0; i<x;i++)
	{
	    int n,k;
	    cin>>n>>k;
	    vector <int> val;
	    val.resize(n);
	    int asum=0;
	    int bsum=0;
	    for(int j=0; j<n;j++)
	        cin>>val[j];
	    sort(val.begin(), val.end());
	    cout<<"here";
	    int include=insert(asum, bsum,val,n-1,k);
	    int exclude=insert(asum, bsum,val,n-1,k);
	    if(include>n&&exclude>n)
	    cout<<"-1\n";
	    else if(include>exclude)
	    cout<<exclude<<"\n";
	    else
	    cout<<include<<"\n";
	}
	return 0;
}
