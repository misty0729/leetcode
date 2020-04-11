#include<iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int min = 0;
    int sum = 0;
    int max = INT_MIN;
    for(int i = 0; i < nums.size();i++) {
        sum += nums[i];
        int temp = sum - min;
        if(temp > max) max = temp;
        if(sum < min) min = sum;
    }
    return max;
}
int main(){
    int nums[9] = {-2,-1};
    vector<int>myvec(nums,nums+2);
    cout << maxSubArray(myvec)<<endl;
    return 0;

}