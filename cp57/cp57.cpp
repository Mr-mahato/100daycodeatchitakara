// problem link : https://www.codechef.com/problems/EID?tab=statement
// This is the problem that being solved during being part of the community

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int  n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    sort(a,a+n);
	    int min = 1089001;
	    int res =0;
	   for(int i=0;i<n-1;i++)
	   {
	       res = a[i+1] - a[i];
	       if(res<min)
	       min = res;
	   }
	   
	   cout << min << endl;
	}
	
	return 0;
}
