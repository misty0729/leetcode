#include <iostream>
using namespace std;
class A {
private:
    int value;
public:
    A(int n){value = n;}
    //wrong,因为会无限递归效用赋值构造函数
    //A(A another) {value = another.value; }
    //应该这样写
    A(const A& another){value = another.value;}
    void Print() {
        cout << value << endl;
    }
};
int main() {
    //可以直接这样赋值
    A a = 10;
    A b = a;
    b.Print();
    return 0;
}