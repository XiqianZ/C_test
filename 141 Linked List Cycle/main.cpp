#include "../pub/pub.hpp"

//std
#include<map>

bool hasCycle(ListNode *head){
    if(head->next == NULL){
        return false;
    } else {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow != fast){
            if(fast == NULL || fast->next == NULL){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
}


bool hasCycle_2(ListNode *head){
    if(head==NULL){
        return false;
    }
    std::map<ListNode*, bool> visited;
    while(head->next){
        if(visited[head]){
            return true;
        } else {
            visited[head] = true;
            head = head->next;
        }
    }
    return false;
}

int main(){
    cout << "Hello, World!" << endl;
    

    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;

    ListNode* head_2;
    cout << hasCycle_2(head) << endl;

    return 0;
}