#include<iostream>
#include<vector>
using namespace std;
 int rob(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    if(nums.size() == 1) return nums[0];
    if(nums.size() == 2) return max(nums[0],nums[1]);
    int two_all_max = nums[0];
    int one_max = nums[1];
    int all_max = max(nums[0],nums[1]);
    for(int i = 2; i < nums.size();i++) {
        int temp = two_all_max + nums[i];
        one_max > two_all_max ? two_all_max = one_max : two_all_max;
        one_max = temp;
        temp > all_max?all_max = temp:all_max;
    }
    return all_max;
}
int main() {    
    int a[10] = {2,1,1,2};
    vector<int> num(a,a+4);
    cout << rob(num) << endl;
    return 0;
}