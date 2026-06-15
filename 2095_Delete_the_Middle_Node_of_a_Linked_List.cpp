#include <bits/stdc++.h>
using namespace std;
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *low=head;
        ListNode *prev=NULL;
        ListNode *fast=head;
        ListNode *mid;
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }
        while(fast != NULL && fast->next != NULL)
        {
            prev = low;
            low=low->next;
            fast=fast->next->next;
        }
        mid=low;
        prev->next = mid->next;
        delete mid;
        ListNode *temp=head;
        while(temp != NULL)
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        }   
        cout<<"NULL";
        return head;
    }
};

int main() {
    Solution s;
    ListNode *first=new ListNode(1);
    ListNode *second=new ListNode(2);
    ListNode *third=new ListNode(3);
    ListNode *four=new ListNode(4);
    ListNode *five=new ListNode(5);
    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    ListNode *ans=s.deleteMiddle(first);
    return 0;
}
