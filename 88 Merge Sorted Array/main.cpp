#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;


void test(vector<int>& v1, int m, vector<int>& v2, int n){
    int v1Index = m - 1;
    int v2Index = n - 1;
    int mergeIndex = m + n - 1;
    
    while(v1Index >= 0 && v2Index >=0){
        if(v1[v1Index] >= v2[v2Index]){
            v1[mergeIndex--] = v1[v1Index--];
        } else {
            v1[mergeIndex--] = v2[v2Index--];
        }
        cout<<v1Index<<" "<<v2Index<<" "<<mergeIndex<<endl;
    }
}

int main(){
    vector<int> v1 = {1,2,3,0,0,0};
    vector<int> v2 = {-1,5,6};
    test(v1, 3, v2, 3);
    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    return 0;
} 