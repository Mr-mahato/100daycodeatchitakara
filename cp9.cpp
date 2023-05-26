// ! this program is the simple one where i have seperated every digit and find the number 4 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int num;
	    cin >> num;
	    int c = 0,res=0;
	    while(num!=0)
	    {
	        res = num%10;
	        if(res==4) c++;
	        num = num/10;
	    }
	    printf("%d\n",c);
	}
	return 0;
}
