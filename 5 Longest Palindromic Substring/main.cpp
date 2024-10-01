#include"../pub/pub.hpp"



string lonestPalindrome(string s){

    int n = s.size();
    if(n<2) return s;

    int max_len = 1;
    int start = 0;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for(int i=0; i<n; i++){
        dp[i][i] = 1;
    }

    for(int j=1; j<n; j++){
        for(int i=0; i<j; i++){
            if(s[i] != s[j]){
                dp[i][j] = 0;
            }else{
                if(j-i<3){
                    dp[i][j] = 1;
                }else{
                    dp[i][j] = dp[i+1][j-1];
                }
            }

            if(dp[i][j] && j-i+1>max_len){
                max_len = j-i+1;
                start = i;
            }
        }
    }

    return s.substr(start, max_len);
}

int main(){
    cout<<"hello world"<<endl;

    return 0;
}