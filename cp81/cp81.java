public class cp81 {
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0 ){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = sc.nextInt();

            HashSet<Integer> set = new HashSet<>();

            for( int i = a ; i <= b ; i++ ){
                set.add( i );
            }

            for( int i = c ; i <= d ; i++ ){
                set.add( i );
            }

            System.out.println( set.size() );

        }
    }
}
