#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mymap;
        for(int i = 0; i < nums.size();i++) {
            int num = nums[i];
            if(mymap.count(num) == 0) mymap[num] = i;
            else {
                if(i-mymap[num]<=k) return true;
                else mymap[num] = i;
            }
        }
        return false;
}
int main() {
    int a[10] = {1,1};
    vector<int> vec(a,a+2);
    cout << containsNearbyDuplicate(vec,2) << endl;
    return 0;
}