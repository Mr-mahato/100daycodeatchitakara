#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n--)
	{
	    int x,y;
	    cin >> x >> y;
	    for(int i=1;i<=1000;i++)
	    {
	        if(i%2!=0)
	        {
	            x -=i;
	        }
	        else 
	        {
	            y -=i;
	        }
	        if(x<0){ cout << "Bob"<< endl;  break;}
	        if(y<0) {cout << "Limak"<< endl;break;}
	    }
	    
	}
	return 0;
}
