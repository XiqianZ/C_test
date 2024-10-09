#include "../pub/pub.hpp"


int shortestDistance(vector<string>& words, string word1, string word2) {
    int index1 = -1;
    int index2 = -1;
    int minDistance = INT_MAX;
    for(int i = 0; i < words.size(); i++) {
        if(words[i] == word1) {
            index1 = i;
        }
        if(words[i] == word2) {
            index2 = i;
        }
        if(index1 != -1 && index2 != -1) {
            minDistance = min(minDistance, abs(index1 - index2));
        }
    }
    return minDistance;
}


int shortestDistance_2(vector<string>& word, string word1, string word2){
    int index1 = -1;
    int index2 = -1;
    int minDistance = INT_MAX;
    for(int i = 0; i<word.size(); i++){
        if(word[i] == word1){
            index1 = i;
        }
        if(word[i] == word2){
            index2 = i;
        }
        if(index1 != -1 && index2 != -1){
            minDistance = min(minDistance, abs(index1 - index2));
        }
    }
    return minDistance;
}


int main() {
    vector<string> words = {"practice", "makes", "perfect", "coding", "makes"};
    string word1 = "coding";
    string word2 = "practice";
    cout << shortestDistance(words, word1, word2) << endl;
    return 0;
}