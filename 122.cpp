#include<iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    if(prices.size()==0 || prices.size()==1) return 0;
    int num = 0;
    for(int i = 0; i < prices.size()-1;i++) {
       if(prices[i+1]>prices[i]) 
        num += (prices[i+1]-prices[i]);
    }
    return num;
}
int main() {
    int a[10] = {7,6,4,3,1};
    vector<int> vec(a,a+5);
    cout << maxProfit(vec) << endl;
    return 0;
}