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
    ListNode* splitvect(vector<ListNode*>& lists, int start, int end)
    {
        if(start == end) return lists[start];
        if(start+1 == end) return merge(lists[start],lists[end]);

        int mid = start + (end-start)/2;
        ListNode *left = splitvect(lists,start,mid);
        ListNode *right = splitvect(lists,mid+1,end);
        return merge(left,right);

    }
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        while (l1 && l2) {
            if (l1->val < l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        
        if (l1 != NULL)
            curr->next = l1;
        else
            curr->next = l2;
            
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        return splitvect(lists,0,lists.size()-1);
    }
};

int main() {
    Solution s;
    ListNode *first = new ListNode(1);
    ListNode *first_one = new ListNode(4);
    ListNode *first_second = new ListNode(5);

    ListNode *second = new ListNode(1);
    ListNode *second_one = new ListNode(3);
    ListNode *second_second = new ListNode(4);

    ListNode *third = new ListNode(2);
    ListNode *third_one = new ListNode(6);

    first->next = first_one;
    first_one->next = first_second;

    second->next = second_one;
    second_one = second_second;

    third->next = third_one;

    vector<ListNode *>vec = {first,second,third};
    ListNode *ans = s.mergeKLists(vec);
    while (ans != nullptr)
    {
        cout<<ans->val<<" ";
        ans = ans->next;
    }
    return 0;
}
