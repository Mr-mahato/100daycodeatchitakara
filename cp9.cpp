// THis program is based on a problem in codechef
//! THis is based on Keplers law
/*Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. Kepler's 3rd law is The Law of Periods, according to which:

The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    float a,b,c,d;
	    cin >> a>>b>>c>>d;
	    float res1,res2;
	    res1 = (a*a)/(c*c*c);
	    res2 = (b*b)/(d*d*d);
	    if(res1==res2) cout << "Yes" << endl;
	    else cout << "No" << endl;
	}
	return 0;
}
