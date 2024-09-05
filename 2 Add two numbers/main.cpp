#include "../pub/pub.hpp"


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* dummyHead = new ListNode(0);
    ListNode* current = dummyHead;
    int carry = 0;
    while(l1 != nullptr || l2 != nullptr || carry !=0 ){
        int sum = carry;
        if(l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        current->next = new ListNode(sum%10);
        current = current->next;
    }
    ListNode* result = dummyHead->next;
    delete dummyHead;
    return result;
}

int main(){
    cout<<"Hello World"<<endl;
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);
    while(result != nullptr){
        cout<<result->val<<endl;
        result = result->next;
    }

    return 0;
}