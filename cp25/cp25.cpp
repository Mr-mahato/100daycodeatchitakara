#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n , a, b;
	    cin >> n >> a >> b;
	    int fq[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> fq[i];
	    }
	    int x=0,y=0;
	    for(int i=0;i<n;i++)
	    {
	        if(fq[i]==a)  x++;
	        if(fq[i]==b) y++;
	    } 
	    float p1 ,p2 ,p;
	    p1 = (x/(float)(n)) ;
	    p2 =  (y/(float)(n));
	    p = p1*p2;
	    cout << p << endl;
	}
	return 0;
}
