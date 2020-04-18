#include<iostream>
#include<string>
using namespace std;
// uint32_t reverseBits(uint32_t n) {
//     string s(32,'0');
//     int base = 2;
//     int i = 0;
//     while(n >0) {
//         if(n % base == 1) s[i] = '1';
//         n = n / base;
//         i += 1;
//     }
//     int left = 0;
//     int right = 31;
//     while(left < right) {
//         swap(s[left],s[right]);
//         left++;
//         right--;
//     }
//     uint32_t num = 0;
//     for(int i = 31; i >= 0; i--) {
//         num *= 2;
//         num += (s[i] - '0');
//     }
//     return num;
// }
uint32_t reverseBits(uint32_t n){
    int num[32] = {0};
    int ret = 0;
    for(int i = 0; i < 32; i++) {
        num[i] = n & 1;
        n >>= 1;
    }
    for(int i = 0; i < 32; i++) {
        ret <<= 1;
        ret += num[i];
    }
    return ret;
}
int main() {
    uint32_t temp = 43261596;
    cout  << reverseBits(temp) << endl;
    return 0;
}