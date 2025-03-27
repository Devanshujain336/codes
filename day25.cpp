problem1-> 
class Solution {
public:
    void deleteNode(ListNode* node) {
       node->val = node->next->val;
       node->next = node->next->next;
}
};


  
approach -> created newnode  with new Node(X) and then inserted it to the last

problem 2-> 
  class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *temp = head;
         Node *newnode = new Node(x);
         
         if(head == NULL) return newnode;
         
       while(temp->next!=NULL){
           temp = temp-> next;
       }
       
       temp-> next = newnode;
       
       newnode->next = NULL;
          
   return head; }
};
