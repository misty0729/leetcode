#include<iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    vector<int> prefix;
    int sum = 0;
    prefix.push_back(sum);
    for(int i = 0; i < nums.size();i++) {
        sum += nums[i];
        prefix.push_back(sum);
    }
    int max = INT_MIN;
    for(int i = 0; i < nums.size();i++) {
        for(int j = i; j < nums.size();j++) {
            int temp = prefix[j+1]-prefix[i];
            if(temp > max) max = temp;
        }
    }
    return max;
}
int main(){
    int nums[9] = {-2,-1};
    vector<int>myvec(nums,nums+2);
    cout << maxSubArray(myvec)<<endl;
    return 0;

}