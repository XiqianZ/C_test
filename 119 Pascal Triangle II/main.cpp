#include "../pub/pub.hpp"


vector<int> getRow(int rowIndex) {
    vector<int> res(rowIndex+1, 1);
    for(int i=2; i<=rowIndex; i++){
        for(int j=i-1; j>0; j--){
            res[j] = res[j] + res[j-1];
        }
    }
    return res;
}


vector<int> generate_row(int numRows){
    // vector<vector<int>> result ;
    vector<int> prevRow;
    for(int i=0; i<numRows+1; i++){
        vector<int> tempRow(i+1, 1);
        for(int j=1; j<i; j++){
            tempRow[j] = prevRow[j-1] + prevRow[j];
        }
        // result.push_back(tempRow);
        prevRow = tempRow;
    }
    return prevRow;
}


int main(){
    cout<<"Hello World"<<endl;

    // vector<int> res = generate_row(3);
    // for(int i=0; i<res.size(); i++){
    //     cout<<res[i]<<" ";
    // }

    vector<int> testVec;
    testVec.push_back(1);
    testVec.push_back(2);
    for(int i=0; i<testVec.size(); i++){
        cout<<testVec[i]<<" ";
    }

    return 0;
}