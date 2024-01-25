package BinarySearch;
import java.util.Arrays;
//For binary search your data must be sorted in a order
public class intro {
    public static int findTargetWithRecursion(int[] arr , int first , int last , int target)
    {
        int mid = (first+last)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(first > last )
        {
            return -1;
        }
        else if(arr[mid]>target)
        {
            return findTargetWithRecursion(arr,first , mid-1 , target);
        }
        else {
            return findTargetWithRecursion(arr, mid+1 , last , target);
        }
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8};

        int target = 842;
        int lp = 0 , hp = arr.length-1;

//        while(lp<=hp)
//        {
//            int mid = (lp+hp)/2;
//            if(arr[mid]==target)
//            {
//                System.out.println("Target Element Found at index: " + mid);
//                break;
//            }
//            else if(arr[mid]>target)
//            {
//                hp = mid-1;
//            }
//            else
//            {
//                lp = mid+1;
//            }
//        }

//        lets use inbuild function in java

//        This is using default Inbuilt function of Binary Search in Java
//        int res = Arrays.binarySearch(arr,8);
//        System.out.println("Index found at: " + res);

//        lets give a try with recursion;

        int res = findTargetWithRecursion(arr,0,hp,target);

//        here -1 shows that the target is not present in the array
        System.out.println("Target Index with Recursion: " + res);
    }
}
