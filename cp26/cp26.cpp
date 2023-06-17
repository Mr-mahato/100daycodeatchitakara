//this is the problem solved in the community 
// problem link:https://www.codechef.com/problems/DISTCODE?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s,st;
	    cin>>s;
	    set<string>sts; // -->this is set string which doesnt take any duplicate so it is there
	    for (int i = 0; i < s.length()-1; i++) {
	        /* code */
	        st=s.substr(i,2); // here substr() is function which will make the string as substring
	        sts.insert(st); // here insert() is the function which is gonna insert the element in the set string which will not take any duplicate and take one substring as one element.
	        
	    }
	    cout<<sts.size()<<endl;
	}
	return 0;
}