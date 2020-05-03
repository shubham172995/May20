/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallhead=NULL;
        ListNode* bighead=NULL;
        ListNode* smallcurr=NULL;
        ListNode* bigcurr=NULL;
        ListNode* curr=head;
        bool small=false, big=false;
        while(curr){
            if(curr->val<x){
                if(!small){
                    ListNode* temp=new ListNode(curr->val);
                    smallhead=temp;
                    smallcurr=temp;
                    small=true;
                }
                else{
                    ListNode* temp=new ListNode(curr->val);
                    temp->val=curr->val;
                    temp->next=NULL;
                    smallcurr->next=temp;
                    smallcurr=smallcurr->next;
                }
            }
            else if(curr->val>=x){
                if(!big){
                    ListNode* temp=new ListNode(curr->val);
                    temp->val=curr->val;
                    temp->next=NULL;
                    bighead=temp;
                    bigcurr=temp;
                    big=true;
                }
                else{
                    ListNode* temp=new ListNode(curr->val);
                    temp->val=curr->val;
                    temp->next=NULL;
                    bigcurr->next=temp;
                    bigcurr=bigcurr->next;
                }
            }
            curr=curr->next;
        }
        if(!smallcurr)
            return bighead;
        smallcurr->next=bighead;
        return smallhead;
    }
};