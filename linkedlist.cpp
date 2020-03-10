#include <iostream>
#include <string>
using namespace std;
 
struct ListNode
{
    int val;
    ListNode* next;
};
 
void AddToTail(ListNode** pHead, int value);
 
int main() {
    //如何初始化
    ListNode** head = new ListNode *;
    *head = NULL;
    AddToTail(head, 10);
    if (*head != NULL) {
        cout << (*head)->val << endl;
    }
    else {
        cout << "head is NULL.." << endl;
    }
}
 //不能是*pHead，不然的话对pHead改变不了外面的地址，只能改变指针和引用！
void AddToTail(ListNode** pHead, int value) {
    ListNode* pNew = new ListNode();
    pNew->val = value;
    pNew->next = NULL;
 
    if (*pHead == NULL) {
        *pHead = pNew;
    }
    else {
        ListNode* p = *pHead;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = pNew;
    }
}