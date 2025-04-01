https://www.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-length-of-loop
# to find the length of the loop in the list
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
       
        Node * slow = head;
        Node *fast = head;
       
        int len = 0;
        int val;
        
        if(head==NULL || head->next==NULL) return 0;
        
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        
            
            if(slow == fast) {
                Node *temp = slow->next;
                 int count =1;
                while(temp!=slow){
                    count++;
                    temp = temp->next;
                }
      return count;  }
        }
       
        
        
        
        return 0;
        
    }
};

https://leetcode.com/problems/longest-palindromic-substring/description/
to find the pallindomic list

class Solution {
public:

bool ispal(string str,int i, int j){
   
    while(i<j){
 if(str[i]!=str[j]) return false;
 i++;
 j--;
    }

    return true;
}
    string longestPalindrome(string s) {
       int i=0;
       int j=0;
string ans="";
       while(i<s.size() && j<s.size()){
       if( ispal(s,i,j)){
            if(ans.length()<(j-i+1)) ans=s.substr(i,j-i+1);
        }
        j++;
        if(j==s.size()){
             j=i+1;
             i++;
           
        }
       }
      
        
    return ans; }
};


