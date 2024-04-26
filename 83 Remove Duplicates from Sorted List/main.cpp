#include<stdio.h>
#include<iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


ListNode* deleteDuplicates(ListNode* head){
    if(head == nullptr){
        return head;
    }
    ListNode* current = head;
    while(current->next){
        if(current->val == current->next->val){
            current->next = current->next->next;
        } else {
            current = current->next;
        }
    }
    return head;
}


ListNode* test(ListNode* head){
    if(head == nullptr){
        return head;
    }
    ListNode* current = head;
    while(current->next != nullptr){
        if(current->val == current->next->val){
            current->next = current->next->next;
        } else {
            current = current->next;
        }
    }
    return head;
}

int main(){
    cout<<"Hello World"<<endl;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);


    //Create a listnode for testing
    vector<int> values = {0, 1, 1, 2 ,4,4,4,4,5,5};
    ListNode* test_head = new ListNode(values[0]);
    ListNode* temp_current = test_head;
    for(int i=1; i<values.size(); i++){
        temp_current->next = new ListNode(values[i]);
        temp_current = temp_current->next;
    }


    // while(test_head != nullptr){
    //     cout<<test_head->val<<endl;
    //     test_head = test_head->next;
    // }

    ListNode* result = test(test_head);
    while(result != nullptr){
        cout<<result->val<<endl;
        result = result->next;
    }

    return 0;
}