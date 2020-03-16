import java.util.*;
public class Solution78 {
    // 迭代
    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> output = new ArrayList<List<Integer>>();
        List<Integer> newlist = new ArrayList<Integer>();
        output.add(newlist);
        for(int num : nums) {
            List<List<Integer>> tempo = new ArrayList<List<Integer>>();
            for(List<Integer> sublist : output) {
                List<Integer> newone = new ArrayList<Integer>();
                newone.addAll(sublist);
                newone.add(num);
                tempo.add(newone);
            }
            output.addAll(tempo);
        }
        for(List<Integer> sublist : output) {
            System.out.println(sublist);
        }
        return output;
    }
    // public static void subset_two_way(int[] nums) {
    //     List<List<Integer>> output = new ArrayList<List<Integer>>();
    //     int n = nums.length;
    //     for (int i = (int)Math.pow(2, n); i < (int)Math.pow(2, n + 1); ++i) {
    //         // generate bitmask, from 0..00 to 1..11
    //         String bitmask = Integer.toBinaryString(i).substring(1);

    //     }

    // // return output;
    // }
    public static void main(String[] args) {
        int[] nums = {1,2,3};
        // subsets(nums);
        subset_two_way(nums);
    }
}