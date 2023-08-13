// problem link : https://www.codechef.com/problems/AVOIDCONTACT
import java.util.*;
public class cp88 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int x = sc.nextInt() , y = sc.nextInt();
            if(x==y) System.out.println(2*x-1);
            else System.out.println(x+y);


        }
    }
}
