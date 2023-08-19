#include<bits/stdc++.h>
int countPalindrome(string str) {
  // Write your code here
  transform(str.begin(), str.end(), str.begin(), ::tolower);
	int len = str.length();
  int m = 0,n = 0,ans  = 0;
 for(int i = 0;i<len+1;i++)
 {
	if(str[i]==' ' || i==len)
    {
      n = i-1;
      // lets check palindrom
      int l = m , h =n,flag = 0;
      while(l<h)
      {
        if(str[l]!=str[h])
        {
          flag = 1;
          break;
        }
        else {
          l++,h--;
        }
      }
      if(flag==0)
      {
        ans++;
      }
      m=i+1;
    } 
 } 
  return ans;
}