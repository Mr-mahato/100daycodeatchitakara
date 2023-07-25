
import java.util.*;
import java.lang.*;
import java.io.*;
public class cp69 {
    public static void main (String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            int maxi = Integer.MIN_VALUE;
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                maxi = Math.max(maxi, arr[i]);
            }
            int flag = 0;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] != arr[i + 1]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                System.out.println(0);
            } else if (flag == 1 && maxi == arr[n - 1]) {
                System.out.println(1);
            } else System.out.println(2);
        }
    }
}
