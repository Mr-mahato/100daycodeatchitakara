import java.util.Scanner;

// problem link :https://www.codechef.com/problems/CHFRICH
public class cp83 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int a = sc.nextInt() , b = sc.nextInt() , x = sc.nextInt();
            a = b-a;
            System.out.println(a/x);

        }
    }

}
