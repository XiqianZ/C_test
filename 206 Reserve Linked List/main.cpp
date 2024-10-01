#include "../pub/pub.hpp"

ListNode* reverseList(ListNode* head){
    if(!head){
        return nullptr;
    }
    stack<ListNode*> nodes;
    while(head){
        nodes.push(head);
        head = head->next;
    }
    ListNode* revHead = nodes.top();
    ListNode* result = nodes.top();
    nodes.pop();

    while(!nodes.empty()){
        result->next = nodes.top();
        nodes.pop();
        result = result->next;
    }
    result->next = nullptr; // Ensure the last node points to nullptr, otherwise there will be a cycle in the list
    return revHead;
}



ListNode* reverseList2(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    ListNode* current = head;

    while(current){
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
}




int main(){
    cout<<"Hello World"<<endl;

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    ListNode* result = reverseList2(head);

    while(result){
        cout<<result->val<<endl;
        result = result->next;
    }



    return 0;
}