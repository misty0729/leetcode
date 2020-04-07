#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int ptr = 1;
        int len = nums.size();
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                len -= 1;
            }
            else {
                nums[ptr] = nums[i];
                ptr ++;
            }
        }
        return len;
}
int main() {
    int a[3] = {1,1,2};
    vector<int> vec(a,a+3);
    cout << removeDuplicates(vec);
    return 0;

}