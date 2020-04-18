#include<iostream>
using namespace std;
int hammingWeight(uint32_t n) {
    int num = 0;
    for(int i = 0 ; i < 32; i ++) {
        if(n & 1 == 1) num += 1;
        n >>= 1;
    }
    return num;
}
int main() {
    
}