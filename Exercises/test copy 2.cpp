#include <bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    struct Node *next;
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;
    
    head->next = deleteDuplicates(head->next);
    
    if(head->val == head->next->val)
        return head->next;
    return head;   
}

int main() {
    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second-> data = 1;
    second-> next = third;

    third-> data = 2;
    third-> next = NULL;

    deleteDuplicates(head);
    

    return 0;
}