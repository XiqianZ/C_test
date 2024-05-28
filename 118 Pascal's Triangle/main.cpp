#include "../pub/pub.hpp"


vector<vector<int>> test(int n){
    vector<vector<int>> res = {};
    if(n == 0){
        return {{}};
    } else if(n == 1){
        return {{1}};
    } else if(n == 2){
        return {{1}, {1, 1}};
    }
    res.push_back({1});
    res.push_back({1,1});
    for(int i=2; i<n; i++){
        //i=2 is the third line, and n=3
        //i = 2; 
        vector<int> line = {};
        //j=0,1
        for(int j=0; j<i; j++){
            cout<<"i "<<i<<"| j "<<j<<endl;
            if(j==0 || j==i){
                line.push_back(1);
            } else {
                line.push_back(res[i-1][j-1] + res[i-1][j]);
            }
        }
        res.push_back(line);
    }
    return res;
}


vector<vector<int>> generate(int numRows){
    vector<vector<int>> v(numRows);
    v[0] = {1};
    for(int i=2; i<=numRows; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || j==i){
                v[i-1].push_back(1);
            } else {
                v[i-1].push_back(v[i-2][j-2]+v[i-2][j-1]);
            }
        }
    }
    return v;
}


int main(){

    cout<<"Hello World"<<endl;
    test(4);

    return 0;
}