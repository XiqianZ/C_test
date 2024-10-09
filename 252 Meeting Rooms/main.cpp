#include "../pub/pub.hpp"


bool canAttendMeetings(vector<vector<int>>& intervals){
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0] < b[0];
    });
    for(vector<vector<int>>::size_type i=1; i<intervals.size(); i++){
        if(intervals[i][0] < intervals[i-1][1]){
            return false;
        }
    }
    return true;
}


int main(){
    vector<vector<int>> intervals = {{0,30},{5,10},{15,20}};
  
    cout << canAttendMeetings(intervals) << endl;
    return 0;
}