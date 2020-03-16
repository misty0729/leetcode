import java.util.*;
public class binarysearch {
    public static int binary(int []arr, int n, int target) {
        int l = 0;
        int r = n-1; //[l,r]
        while(l <= r) {
            // int mid = (l+r)/2;
            // 关于整型溢出的问题
            int mid = l + (r - l)/2;
            if(target == arr[mid]) return mid;
            else if( target < arr[mid]) r = mid -1;
            else l = mid + 1;
        }
        return -1;
    }
    public static void main(String[] args) {
        int []arr = {1,3,4,5,6,111,45663,765332};
        int k = binary(arr,8,122);
        System.out.println(k);
    }
}