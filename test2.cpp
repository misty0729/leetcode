#include <string.h>
using namespace std;
class Mystr{
private:
    char* my_ptr;
public:
    Mystr(char* m_data = nullptr);
    Mystr(const Mystr& mystr);
    ~Mystr();
};

//拷贝构造函数，坑很多！！！
Mystr& Mystr::operator=(const Mystr &mystr) {
    //要判断是不是将本身赋值给本身，否则可能发生泄漏的错误
    if(this == & mystr) {
        return *this;
    }
    if(my_ptr != nullptr) {
        delete []my_ptr;
        my_ptr = nullptr;
    }
    //strlen是不包含'\0'的！，所以耀+1
    my_ptr = new char[strlen(mystr.my_ptr)+1];
    strcpy(my_ptr,mystr.my_ptr);
    //别忘了把*this返回
    return *this;
}