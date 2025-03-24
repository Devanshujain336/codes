
https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/1584692370/
code -->
  class Solution {
public:
    int minAddToMakeValid(string s) {

        int count=0;

stack<int>st;

        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push('(');
          else if(s[i]==')' && (!st.empty())){

            st.pop();
            count+=2;
          }
        }

        int ans = (s.length()-count);
   return abs(ans); }
};

approach -> used stack to put ( and when got pair, made pop out with increasing count+2; and subtracting by size led to ans of solution
O(n)
O(1)


problem2-> class Solution {
public:
    int beautySum(string s) {
       
        int count =0;

       for(int i=0;i<s.length();i++){

      map<char,int>v;


        for(int j=i;j<s.length();j++){
             v[s[j]]++;

// this is remains same as to make search of max and min in new map
// occuring again and again with auto iteration

        int mini = INT_MAX;
        int maxi = INT_MIN;

for(auto it:v){
     mini = min(mini,it.second);
 maxi = max(maxi,it.second);
         
}

// in maps for count val always use iterator
 count+=(maxi-mini);
}
        }

       
    return count;}
};

approach -> using two loops traversed all the substringa, using iterator counted all the occurences of all, then made max - min and stored in count
