#include<iostream>
#include<vector>
#include<map>
using namespace std;
int majorityElement(vector<int>& nums) {
    map<int,int>mymap;
    int num = -1;
    int p = nums.size()/2;
    for(int i = 0; i < nums.size();i++) {
        if(mymap.find(nums[i]) != mymap.end()) {
            mymap[nums[i]] += 1;
            if(mymap[nums[i]] > p) {num = nums[i];break;}
        }
        else {
            mymap[nums[i]] = 1;
            if(mymap[nums[i]] > p) {num = nums[i];break;}
        }
    }
    return num;
}
int main() {
    int a[10] = {1};
    vector<int>my(a,a+1);
    cout << majorityElement(my) << endl;
    return 0;
}