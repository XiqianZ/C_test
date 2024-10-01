#include "../pub/pub.hpp"


bool isIsomorphic(string s, string t){
    vector<int> s_map(256, -1);
    vector<int> t_map(256, -1);
    int len = s.length();
    for(int i=0; i<len; i++){
        if(s_map[s[i]] != t_map[t[i]]){
            return false;
        } else {
            s_map[s[i]] = i;
            t_map[t[i]] = i;
        }
    }
    return true;
}






int main(){
    cout<<"hello world"<<endl;


    return 0;
}