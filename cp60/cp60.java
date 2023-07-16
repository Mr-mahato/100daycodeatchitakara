/* package codechef; // don't place package name! */
//  problem link : https://www.codechef.com/problems/MVR
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
		int a[] = new int[4];
		int res1=0, res2 =0;
		for(int i=0;i<4;i++)
		{
		    a[i] = sc.nextInt();
		}
		res1 = a[0]*2 +a[1];
		res2 = a[2]*2 + a[3];
		if(res1==res2) System.out.println("Equal");
		else if(res1>res2) System.out.println("Messi");
		else System.out.println("Ronaldo");
	    
	}
}
