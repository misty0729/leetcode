#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0) return;
        int ptrnum2 = n - 1;
        int ptrnum1 = m - 1;
        int total = m+n-1;
        while(ptrnum1 >= 0 && ptrnum2 >= 0) {
            if(nums1[ptrnum1] >= nums2[ptrnum2]) {
                nums1[total] = nums1[ptrnum1];
                ptrnum1 --;
            }
            else {
                nums1[total] = nums2[ptrnum2];
                ptrnum2 --;
            }
            total --;
        }
        while(ptrnum2 >= 0) {
            nums1[total--] = nums2[ptrnum2--];
        }
}