problem 1-> 
  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
ListNode * fast = head;
ListNode * slow = head;


        while(fast!=NULL && fast->next!=NULL){
            slow = slow ->next;
            fast = fast->next->next;

            if(slow==fast) return true;
        }
  return false;  }
};





problem 2-> find the middle node, so by using the generalised method uing slow and fast pointer find out the middle node
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
    ListNode* middleNode(ListNode* head) {
       if(head==NULL || head->next == NULL) return head;

       ListNode* slow = head;
       ListNode* fast = head;

while(fast!=NULL && fast->next!=NULL ){
    fast = fast->next->next;
    slow = slow->next;
}
    return slow; }
};


