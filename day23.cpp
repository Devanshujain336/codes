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
        //finding the longest substring
        string rev  = s;
        reverse(rev.begin(), rev.end());
        int i=0;
int j=0;

       while(j<s.length()){
            if(s[i]==rev[j]){
                i++;
            }
          

            j++;
            if(i==s.length()) return rev+s;
        }

string ans = s.substr(i);

reverse(ans.begin(), ans.end());

   return ans + s; }
};

