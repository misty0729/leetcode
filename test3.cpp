// 指针和数组的区别
#include <iostream>
using namespace std;
int main() {
    int data1[] = {1,2,3,4,5};
    int* data2 = data1;
    printf("%d,%d\n",data1[0],data2[0]);
    return 0;
}