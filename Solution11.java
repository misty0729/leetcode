import java.util.*;

import com.sun.javafx.util.TempState;

import java.math.*;
public class Solution11 {
    public static int maxArea(int[] height) {
        int l = 0;
        int r = height.length - 1;
        int size = (r - l) * Math.min(height[l],height[r]);
        while(l < r) {
            size = Math.max(size,(r - l) * Math.min(height[l],height[r]));
            if(height[l]<height[r]) {
                l++;
            }
            else{
                r--;
            }
        }
        return size;
    }
    public static void main(String[] args) {
        int[]nums = {2,3,4,5,18,17,6};
        int number = maxArea(nums);
        System.out.println(number);
    }
}