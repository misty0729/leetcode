#include<iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
// ListNode* removeElements(ListNode* head, int val) {
//     ListNode* next;
//     if(head == NULL) return NULL;
//     while(head!= NULL){
//         next = head->next;
//         if(head->val == val) {
//             head = next;
//         }
//         else{
//             break;
//         }
//     }
//     ListNode* pre = head;
//     ListNode* now;
//     while(next != NULL) {
//         now = next;
//         next = now->next;
//         if(now->val == val) {
//             pre->next = next;
//         }
//         else {
//             pre = now;
//         }
//     }
//     return head;
// }
ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;
    ListNode* next = dummy->next;
    ListNode* now;
    while(next !=  NULL) {
        now = next;
        next = next->next;
        if(now->val == val) {
            pre->next = next;
        }
        else {
            pre = now;
        }
    }
    return dummy->next;
}
int main() {

}