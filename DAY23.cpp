problem 1-> 
  
  class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = a;
        int count =1;
        if(b.empty()) return 0;

        if(a==b) return 1;
// new thing learnt is checking if string present in another
// by using s,find() ==  string ::npos where npos represent as NOT FOUND
while(a.length()<b.length()){
  
         count++;
         a+=s;

         // we need to again and again check whether our string becomes
        //  equal to b, so if condition as a check
        
          if(a.find(b) != string::npos){ 
           return count;
        }
}

 if(a.find(b)!=string::npos) return count;
       a+=s;
       count++; 
    if(a.find(b)!=string::npos) return count;

  return -1; }
};


problem2-> by chatgpt but good concept 
  class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        int j = 0;

        // Find the longest palindromic prefix
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == s[j]) {
                j++;
            }
        }

        // If the whole string is already a palindrome, return it
        if (j == n) return s;

        // The remaining part that is not a palindrome
        string suffix = s.substr(j);
        reverse(suffix.begin(), suffix.end());

        // Add the reversed suffix at the start and return
        return suffix + s;
    }
};


