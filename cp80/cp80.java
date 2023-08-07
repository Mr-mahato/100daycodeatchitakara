//problem link : https://www.codechef.com/problems/CARRYGOLD
public class cp80 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt(),x=sc.nextInt(),y=sc.nextInt();
            n = n+1;
            if(n*y>=x) System.out.println("YES");
            else System.out.println("NO");


        }
    }
}
