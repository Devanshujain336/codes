problem1-->

class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
       DLLNode* temp = head;
       if(head==NULL || head->next==NULL) return head;
       
        DLLNode* last = NULL; 
    
       
    //   temp->next = temp->next;
       
       while(temp!=NULL){ 
           
            last =   temp->prev;
             temp->prev= temp->next;
              temp->next = last;
             temp = temp->prev;
            
       }
       
       
     

  return  last->prev;  }
};

problem2->>

  
class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        
        Node* temp = head;
        if(head==NULL ) return NULL;
         
    if(x==1){
         head = head->next;
        if(head!=NULL)  head->prev= NULL;
        return head;
    }
    
       int count = 1;
       
       while(count<x && temp!=NULL){
           temp = temp->next;
           count++;
       }
       
       if(temp==NULL) return head;
       
    if(temp->prev!=NULL){
        
        temp->prev->next = temp->next;           
    }
    
    if(temp->next!=NULL){
        temp->next->prev = temp->prev;
    }

    
        
       
       
   return head; }
};

