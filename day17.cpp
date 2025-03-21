Remove Outermost Parentheses
https://leetcode.com/problems/remove-outermost-parentheses/description/

Approach -> using first if conidition, ensured that first bracket should not be included in ans, used continue to avoid adding, then just used basic condition of poping and adding with respective brackets

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>stk;
        string ans="";
  


        for(int i=0;i<s.length();i++){
             //this is used for calculating the first bracket
// as last one will be poped out, but to not include first one this is used
             if(stk.empty()){
                stk.push(s[i]);
                continue;
             }

            if(s[i]=='('){
                 stk.push('(');
            }


            if(s[i]==')'){
                 stk.pop();
            }

            if(!stk.empty())  ans+= s[i];
        }
   return ans; }
};


Isomorphic Strings
https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length()!=t.length()) return false;

        map<char,char>mpp1;
        map<char,char>mpp2;
      //we need two maps as esa ho skta h, ki s[i] ki value t[i] se mapp ho but t[i] ki diff value ussey map ho skti h 
      // ex-> "badc"
// t =
// "baba"

// we are making cross connection, both should mapp simulatneously

        for(int i=0;i<s.length();i++){
            if(mpp1[s[i]]==0 && mpp2[t[i]]==0)
        {     mpp1[s[i]] = t[i];
              mpp2[t[i]] = s[i];
}

else if ( mpp1[s[i]]!=t[i] || mpp2[t[i]]!=s[i]) {
  return false;
}
        }


   return true; }
};
