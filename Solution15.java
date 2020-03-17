import java.util.*;
public class Solution15 {
    public static void main(String[] args) {
        int [] nums = {-1, 0, 1, 2, -1, -4};
        System.out.println(threeSum(nums));
    }
    public static List<List<Integer>> twoSum(int[] nums,int target,int fromindex) {
        List<List<Integer>> result = new ArrayList<>();
        HashMap<Integer,Integer> mymap = new HashMap<>();
        for (int i=fromindex; i < nums.length; i++) {
            int complement = target - nums[i];
            if(mymap.containsKey(complement)) {
                List<Integer> mylist = new ArrayList<Integer>();
                mylist.add(nums[i]);
                mylist.add(complement);
                result.add(mylist);
            }
            else {
                mymap.put(nums[i],1);
            }
        }
        return result;
    }
    public static List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        List<List<Integer>> finalresult = new ArrayList<>();
        for(int i = 0; i < nums.length - 1; i++) {
            int number = nums[i];
            int target = 0 - number;
            List<List<Integer>> midresult = twoSum(nums, target, i+1);
            for(List<Integer>submidresult : midresult) {
                submidresult.add(number);
                result.add(submidresult);
            }
        }
        //去重
        Set<Set<Integer>> quitSet = new HashSet<>();
        for(List<Integer>submidresult : result) {
            Set<Integer> temp = new HashSet<Integer>(submidresult);
            if(!quitSet.contains(temp)) {
                quitSet.add(temp);
                finalresult.add(submidresult);
            }
        }
        return finalresult;
    }
}