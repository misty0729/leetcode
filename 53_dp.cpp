#include<iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    //以i为结尾的最大数组和
    int max_current = 0;
    int max = INT_MIN;
    for(int i = 0; i < nums.size();i++) {
        int temp = max_current + nums[i];
        temp > nums[i] ? max_current = temp :max_current = nums[i];
        max_current > max ? max = max_current:max;
    }
    return max;
}
int main(){
    int nums[9] = {-2,-1};
    vector<int>myvec(nums,nums+2);
    cout << maxSubArray(myvec)<<endl;
    return 0;

}