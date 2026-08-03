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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* newHead = head->next;
        ListNode* prev = NULL;
        ListNode* first = head;

        while (first != NULL && first->next != NULL) {
            ListNode* second = first->next;
            ListNode* nextPair = second->next;

            second->next = first;
            first->next = nextPair;

            if (prev != NULL)
                prev->next = second;

            prev = first;
            first = nextPair;
        }
        return newHead;
    }
};

int main() {
    Solution s;
    ListNode *first = new ListNode(1);
    ListNode *sec = new ListNode(2);
    ListNode *thir = new ListNode(3);
    ListNode *four = new ListNode(4);
    first->next = sec;
    sec->next = thir;
    thir->next = four;
    ListNode *ans = s.swapPairs(first);
    ListNode *curr=ans;
    while(curr->next != NULL)
    {
        cout<<curr->val<<"->";
        curr = curr->next;
    }
    cout<<curr->val;
    
    return 0;
}
