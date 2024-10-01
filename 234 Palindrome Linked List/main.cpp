#include "../pub/pub.hpp"

bool isPalindrome(ListNode* head){
    vector<int> val_vec;
    while(head){
        val_vec.push_back(head->val);
        head = head->next;
    }
    int left = 0;
    int right = val_vec.size()-1;
    while(right > left){
        if(val_vec[right] != val_vec[left]) return false;
        right--;
        left++; 
    }
    return true;
}

ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr){
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

ListNode* endOfFirstHalf(ListNode* head){
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast->next != nullptr && fast->next->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

bool isPalindrome_2(ListNode* head){
    if(head == nullptr) return true;
    ListNode* firstHalfEnd = endOfFirstHalf(head);
    ListNode* secondHalfStart = reverseList(firstHalfEnd->next);

    ListNode* p1 = head;
    ListNode* p2 = secondHalfStart;
    bool result = true;
    while(result && p2 != nullptr){
        if(p1->val != p2->val) result = false;
        p1 = p1->next;
        p2 = p2->next;
    }

    firstHalfEnd->next = reverseList(secondHalfStart);
    return result;
}


int main(){
    cout<<"Hello World"<<endl;

    //Test case 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    cout<<isPalindrome(head)<<endl;



    return 0;
}