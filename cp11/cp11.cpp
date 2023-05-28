// this program is the solution of problem in telegram 
/*Nitin and Sobhagya were playing a game with coins. If Sobhagya has more coins then he is winning, otherwise Nitin is winning. Note that this means if both Nitin and Sobhagya have the same number of coins, then Nitin is winning.*/
/*Initially Nitin has 
�
A coins while Sobhagya has 
�
B coins. Then Ritik came and gave his 
�
C coins to the player who is not winning currently, after which Satyarth came and repeated the same process (gave his 
�
D coins to the player who is not winning currently).*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,s,a,b;
	    cin >> n >> s >> a >> b;
	    if(n<s) n=n+a;
	    else s = s+a;
	    if(n<s) n = n+b;
	    else s = s+b;
	    if(n>s) cout << "N" << endl;
	    else if(n==s) cout << "N" << endl ;
	    else cout << "S" << endl;
	}
	return 0;
}
