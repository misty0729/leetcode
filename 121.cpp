#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int _min = INT_MAX;
    int max_price = INT_MIN;
    for(int i = 0; i < prices.size();i++) {
        if(_min > prices[i]) _min = prices[i];
        int temp = prices[i] - _min;
        if(temp >= max_price) max_price = temp;
    }
    if(max_price < 0) max_price = 0;
    return max_price;
}
int main() {

}