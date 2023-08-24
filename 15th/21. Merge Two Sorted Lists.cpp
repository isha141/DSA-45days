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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
              ListNode *head=NULL; 
               if(l1==NULL)
                    return l2;
               if(l2==NULL) return l1;
               if(l1->val<=l2->val){
                   head=l1;
                   l1=l1->next;
               }
               else{
                   head=l2;
                   l2=l2->next;
               } 
              ListNode *res=head;
              while(l1!=NULL &&  l2!=NULL){
                if( l1->val<=l2->val){
                    res->next=l1;
                    l1=l1->next;
                }
                else if(l2 ){
                    res->next=l2;
                    l2=l2->next;
                }
                  res=res->next;
              }
             if(l1){
                   res->next=l1;
             }
             if(l2){
                 res->next=l2;
             }
             return head;
    }
}; 
// T.C=O(n)
// S.C=O(1)
