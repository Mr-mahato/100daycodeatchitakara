
//! Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    if(x>98) cout << "YEs" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
