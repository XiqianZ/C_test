#include "../pub/pub.hpp"

int maxProfit(vector<int>& prices){
    int minPrice = prices[0];
    int profit = 0;
    for(int i=0; i<prices.size(); i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
        } else {
            profit = max(profit, prices[i] - minPrice);
        }
    }
    return profit;
}

int maxProfit2(vector<int>& prices){
    int minPrice = INT_MAX;
    int profit = 0;
    for(int i=0; i<prices.size(); i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
        } else {
            profit = max(profit, prices[i] - minPrice);
        }
    }
    return profit;
}

int main(){
    cout<<"Hello World"<<endl;

    vector<int> testVec;
    testVec.push_back(1);
    testVec.push_back(2);
    for(int i=0; i<testVec.size(); i++){
        cout<<testVec[i]<<" ";
    }

    return 0;
}