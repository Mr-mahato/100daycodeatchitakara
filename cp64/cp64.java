/* package codechef; // don't place package name! */
//  problem link :https://www.codechef.com/problems/BOMBTHEBASE?tab=statement
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner read = new Scanner(System.in);
		int t = read.nextInt();
		for(int i=0; i<t; i++){
		    int n = read.nextInt();
		    int x = read.nextInt();
		    int[] a = new int[n];
		    int count = 0;
		    for(int j=0; j<n; j++){
		        int ele = read.nextInt();
		        a[j] = ele;
		        if(a[j]<x){
		            count = j + 1;
		        }
		    }
		    System.out.println(count);
		}
	}
}