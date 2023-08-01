public class cp76 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {

            int n = sc.nextInt();
            int m = sc.nextInt();
            if(n==m || (n+m)%2==0) System.out.println("YES");
            else System.out.println("NO");

        }
    }
}
