// problem link : https://www.codechef.com/problems/CARRANGE
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
		int p = sc.nextInt();
		int m = sc.nextInt();
	    int v  = sc.nextInt();
	    
	     m = m-p+1;
	    System.out.println(m*v);
		}
	}
}
