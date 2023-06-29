// problem link : https://www.codechef.com/problems/JMARKET

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n , a,b,c;
	    cin >> n >> a >> b >> c;
	    int arr[3] = {a,b,c};
	    sort(arr,arr+3);
	    int res = arr[0]*(n-1);
	    res = res + arr[1];
	    cout << res << endl;
	}
	return 0;
}
