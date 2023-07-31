public class cp75 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        while(n-->0){
            long x =sc.nextLong();
            long y=sc.nextLong();
            long l= (x*x);
            long r= 2*y;
            if(l==r){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
