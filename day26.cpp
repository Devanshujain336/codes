// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
       //doubly linked list needs to be connected wiht prev and next both 
           Node* temp = head;
       long long count = 0;
       
       Node* newnode = new Node(data);
       
       if(head==NULL) return newnode;
       
       while(count<pos){
           temp = temp->next;
           count++;
       }
       //inserting at the last position
       if(temp->next==NULL){
           temp->next = newnode;
           newnode->next =NULL;
           newnode->prev = temp;
       }
       
       else{
           newnode->next = temp->next;
           temp->next->prev = newnode;
           temp->next = newnode;
           newnode->prev = temp;
       }
  return head;}
};
