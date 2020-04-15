#include <iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int num = nums[0];
    for(int i = 1; i < nums.size();i++) {
        num = num ^ nums[i];
    }
    return num;
}
int main() {
    int a[6] = {2,2,1};
    vector<int> vec(a,a+3);
    cout << singleNumber(vec) << endl;
    return 0;
}