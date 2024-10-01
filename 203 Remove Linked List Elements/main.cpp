#include "../pub/pub.hpp"

ListNode* removeElements(ListNode* head, int val){
    ListNode* origin_head = head;
    ListNode* pre = nullptr;
    if(head == nullptr){
        return head;
    }
    while(head){
        if(head->val == val){
            if(pre) {
                pre->next = head->next;
            } else {
                origin_head = head->next;
            }
        } else {
            pre = head;
        }
        head = head->next;
    }
    return origin_head;
}

ListNode* removeElements2(ListNode* head, int val){
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;
    while(head){
        if(head->val == val){
            pre->next = head->next;
        } else {
            pre = head;
        }
        head = head->next;
    }
    return dummy->next;
}



int main(){
    cout<<"hello world"<<endl;


    return 0;
}