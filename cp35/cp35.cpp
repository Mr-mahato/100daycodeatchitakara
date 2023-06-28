
// problem link: https://www.codechef.com/problems/CAN_REACH
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	 int a , b,c;
	 cin >> a >> b >>c;
	   if(a%c==0 && b%c ==0) cout << "YES" << endl;
	   else cout << "NO" << endl;
	}
	return 0;
}
