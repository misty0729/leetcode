import java.util.*;
public class Solution215 {
    //寻找第k大的元素
    public static int findKthLargest(int[] nums, int k) {
        List<Integer> iter = new ArrayList<Integer>();
        for (int num : nums) {
            iter.add(num);
        }
        k = iter.size() - k + 1;
        int target = nums[0];
        while(true){
        List<Integer> left = new ArrayList<Integer>();
        List<Integer> right = new ArrayList<Integer>();
        List<Integer> middle = new ArrayList<Integer>();
        for(int num : iter) {
            if(num < target) 
                left.add(num);
            else if( num == target) 
                middle.add(num);
            else
                right.add(num);
        }
        if(k <= left.size() ) {
            //处理left
            target = left.get(0);
            iter = left;
            continue;
        }
        k = k - left.size();
        if(k <= middle.size()) {
            return target;
        }
        k = k - middle.size();
        //处理right
        target = right.get(0);
        iter = right;
        }
    }
    public static void main(String []args) {
        int[] nums = {3,2,1,5,6,4};
        int i = findKthLargest(nums,2);
        System.out.println(i);
    }
}