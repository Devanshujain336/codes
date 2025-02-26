// problem 2 -> 
// https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions
class Solution {
  public:
    long long reversedBits(long long x) {
     long long ans = 0;  
     int i=31;
        while(x>0 && i>=0){
            int b = x%2;
            
       
               ans+= b* pow(2,i);
            x=x/2; 
            i--;
            
            
        }
    return ans;
    
    }
};
