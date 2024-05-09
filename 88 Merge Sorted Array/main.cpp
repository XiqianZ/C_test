#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;


void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}


void merge_sort(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int k = m;
    for (int i = 0; i < n; i++) {
        nums1[k] = nums2[i];
        k++;
    }
    sort(nums1.begin(), nums1.end());
}


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
    }
    if(v1Index < 0){
        while(v2Index >= 0){
            v1[mergeIndex--] = v2[v2Index--];
        }
    } else {
        while(v1Index >= 0){
            v1[mergeIndex--] = v1[v1Index--];
        }
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