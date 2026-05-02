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
    int getDecimalValue(ListNode* head) {
        ListNode *temp = head;
        string str="";
        while(temp != NULL)
        {
            if(temp->val == 1)
            str += '1';
            else
            str += '0';
            temp = temp->next;
        }
        int num=0;
        int l=str.length()-1;
        for(int i=l;i>=0;i--)
        {
            if(str[i]=='1')
            {
                num += pow(2,l-i);
            }
        }
        return num;
    }
};
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1); 
    Solution s;
    cout << s.getDecimalValue(head);
    return 0;
}
