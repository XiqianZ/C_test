#include "../pub/pub.hpp"



ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    ListNode* pA = headA;
    ListNode* pB = headB;
    while(pA != pB){
        pA = pA == NULL ? headB : pA->next;
        pB = pB == NULL ? headA : pB->next;
    }
    return pA;
}


ListNode* getIntersectionNode_1(ListNode* headA, ListNode* headB) {
    std::map<int, ListNode*> map;
    while(headA != NULL){
        map[headA->val] = headA;
        headA = headA->next;
    }
    while(headB != NULL){
        if(map[headB->val] == headB){
            return headB;
        }
        headB = headB->next;
    }
    return NULL;
}


int main(){
    cout<<"Hello World"<<endl;

    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = new ListNode(8);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);

    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = headA->next->next;


    ListNode* intersectionNode = getIntersectionNode_1(headA, headB);

    // Check if the intersection node is correct
    if (intersectionNode != nullptr) {
        cout << "Intersection Node Value: " << intersectionNode->val << endl;
    } else {
        cout << "No Intersection Node" << endl;
    }



    return 0;
}