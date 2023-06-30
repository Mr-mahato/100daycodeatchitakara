// problem link:https://www.codechef.com/problems/JOINING

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    if(k%5==0) k = k-1;
	    int res = n/5;
	    if(n-res*5==0) res = n/5;
	    else res = (n/5)+1;
	    int dm = k/5;
	    cout << res -(dm+1) << endl;
	    
	}
	return 0;
}


