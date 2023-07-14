// problem link: https://www.codechef.com/problems/MINDAYSRET
// this problem is solved with respect to community problem task given to me

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
		for(int i=0;i<t;i++)
		{
		    
		int n = sc.nextInt();
		int k = sc.nextInt();
		
		if(n%k==0) {
		    System.out.println(n/k);
		}
		else 
		{
		    System.out.println((n/k)+1);
		}
		}
	}
}
