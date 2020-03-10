#include <iostream>
using namespace std;
bool Find(int *matrix, int rows, int columns, int number) {
    bool find = false;
    int row_now = 0;
    int column_now = columns - 1;
    while(column_now >=0 && row_now < rows) {
        int number_right = matrix[columns * row_now + column_now];
        if(number_right == number ){
            find = true;
            break;
        }
        else if(number_right > number) column_now -= 1;
        else row_now += 1;
    }
    return find;
}
int main() {
    int matrix[] = {1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
    int rows = 4;
    int columns = 4;
    bool result = Find(matrix, rows, columns, 1);
    if(result){
        printf("Find it!\n");
    }
    else{
        printf("Not!!!\n");
    }
    return 0;
}