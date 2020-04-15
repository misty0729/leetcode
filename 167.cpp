#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    int left=0;
    int right = numbers.size()-1;
    vector<int> res;
    while(left<right) {
        int sum = numbers[left] + numbers[right];
        if(sum == target) {
            res.push_back(left+1);
            res.push_back(right+1);
            break;
        }
        else if(sum < target) {
            left ++;
        }
        else {
            right--;
        }
    }
    return res;
}
int main() {
    int a[10] = {2,7,11,15};
    vector<int>vec(a,a+4);
    vector<int>res = twoSum(vec,9);
    for(int i = 0; i < res.size();i++) {
        cout <<res[i]<< endl;
    }
    return 0;
}