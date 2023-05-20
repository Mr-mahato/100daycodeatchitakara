// !Chef is fond of burgers and decided to make as many burgers as possible.
/*
Chef has 
A patties and 
B buns. To make 1 burger, Chef needs 
1 patty and 1 bun.
Find the maximum number of burgers that Chef can make. */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x>>y;
	    if(x<y) cout << x<< endl;
	    else cout << y << endl;
	}
	return 0;
}
