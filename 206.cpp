#include<iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* now = head;
    ListNode* next;
    while(now != NULL) {
        next = now->next;
        now->next = prev;
        prev = now;
        now = next;
    }
    return prev;
}

int main() {

}