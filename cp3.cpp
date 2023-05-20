/*Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).

He was offered deals from two investors. The first investor offers 
�
A dollars for 
10
10% of his company and the second investor offers 
�
B dollars for 
20
20% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y;
	    cin >> x >> y;
	    x= x*100;
	    y=y*100;
	    x = x/10;
	    y = y/20;
	    if(x==y) cout << "Any"<<endl;
	    else if(x<y) cout << "Second"<< endl;
	    else cout << "First"<<endl;
	}
	return 0;
}
