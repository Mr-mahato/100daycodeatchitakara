
// Problem link :https://www.codechef.com/problems/SHOEFIT 

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0)
		{
		    t--;
		int a = sc.nextInt();
		int b = sc.nextInt();
		int  c =sc.nextInt();
		int res = a+b+c;
		if(res==2 || res==1)
		{
		    System.out.println(1);
		}
		else System.out.println(0);
		}
	}
}
