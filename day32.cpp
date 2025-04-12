Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* prev = new ListNode(-1);
        prev->next = head;
               ListNode* forward = prev;
       
       ListNode* temp  = head;
       while(temp){
           if(temp->next && temp->val == temp->next->val){
        
              while( temp->next && temp->val == temp->next->val){
                   temp = temp->next;
                
              }

           
              forward->next = temp->next; 
                 }


              else{
                 
                  forward = forward->next;

              }

                 temp = temp->next;

 
    

       }  

   return prev->next; }
};









Reverse Nodes in k-Group --> 

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
    ListNode* reverseKGroup(ListNode* head, int k) {
          
       if(!head || k==1) return head;

         
       ListNode* temp = head;
       ListNode* dummy = new ListNode(0); 
        ListNode* newnode = dummy;
       stack<int>st;
       int count = 1;
       int size = 1;

       while(temp->next!=NULL){
           temp = temp->next;
           size++;
       }

     //imp to reinitialise
       temp = head;
       int p = size/k;
       //so like this part will cover sub which needs to reversed
       while(p--){
          for(int i=0;i<k && temp!=NULL;i++){
            st.push(temp->val);
            temp = temp->next;
          }

          while(!st.empty()){
            newnode->next = new ListNode(st.top());
            newnode = newnode->next;
            st.pop();
          }

}


while(temp!=NULL){
    newnode->next = new ListNode(temp->val);
    newnode = newnode->next;
    temp = temp->next;
}
return dummy->next; }
};
