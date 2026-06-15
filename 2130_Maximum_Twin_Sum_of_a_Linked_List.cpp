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
    int pairSum(ListNode* head) {
        ListNode* low=head;
        ListNode* fast=head;
        ListNode* mid=NULL;
        ListNode* beformiddle;
        // ListNode* last;

        while(fast!=NULL && fast->next !=NULL)
        {
            // finding element which comes before the mid
            beformiddle=low;
            // last=fast;
            low=low->next;
            fast=fast->next->next;
        }
        mid=low;
        // //in original list finding last element
        // if(last->next != NULL)
        // last=last->next;

        ListNode *prev=NULL;
        ListNode *curr=mid;//element comes before the mid
        ListNode *next=NULL;
        while(curr != NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        beformiddle->next=prev;//adding last node address to this node next

        // ListNode *temp=head;
        // while(temp != NULL)
        // {
        //     cout<<temp->val<<"->";
        //     temp=temp->next;
        // }
        // cout<<"NULL";

        ListNode *temp1;
        ListNode *temp2;
        temp1=head;
        temp2=beformiddle->next;
        int maxi=INT_MIN;
        int sum=0;
        while(temp2 != NULL)
        {
            sum=temp1->val+temp2->val;
            maxi=max(sum,maxi);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return maxi;
    }
};
int main() {
    Solution s;
    ListNode *first=new ListNode(1);
    ListNode *second=new ListNode(2);
    ListNode *third=new ListNode(3);
    ListNode *four=new ListNode(4);
    first->next = second;
    second->next = third;
    third->next = four;
    cout<<s.pairSum(first);
    return 0;
}
