#include "../pub/pub.hpp"


int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<int> dp(n+1, 0);
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            dp[j] = min(dp[j], dp[j+1]) + triangle[i][j];
        }
    }
    return dp[0];
}



int main(){
    cout<<"Hello World"<<endl;
    vector<vector<int>> v = {{2}, {3,4}, {6,5,7}, {4,1,8,3}};
    int size = v.size();
    cout<<size<<endl;
    cout<<minimumTotal(v)<<endl;

    return 0;
}