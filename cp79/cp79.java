public class cp79 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int x = sc.nextInt(),a=sc.nextInt(),b=sc.nextInt();
            int res = (a+(100-x)*b)*10;
            System.out.println(res);


        }
    }
}
