#include<iostream>
using namespace std;
int trailingZeroes(int n) {
    int num = 0;
    long base = 5;
    while(n >= base) {
        num += n/base;
        base *= 5;
    }
    return num;
}
int main() {
    cout << trailingZeroes(5) << endl;
    return 0;
}