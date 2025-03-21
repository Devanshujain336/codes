Maximum Nesting Depth of the Parentheses
https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

just stored the maximum count of the ( bracket, and decrease count when ) occured, making correct count for pairs
TC - O(n)
SC - O(1)


class Solution {
public:
    int maxDepth(string s) {
      
     int maxi = 0;
     int count =0;


     for(int i=0;i<s.length();i++){
        if(s[i]=='('){
          count++;
     
        }

      if(s[i]==')'){
            
            maxi = max(maxi,count);
            count--;
        }
     }

   return maxi; }
};


ROMAN TO INTEGERS 
Approach -> here we mapped all the roman terms with their integers and understood that if next roman i is greater than previous, then we needed to subtract it
TC -> O(n)
SC - O(n)
class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mpp;
int ans =0;
        mpp['I'] = 1;
         mpp['V'] = 5;
          mpp['X'] = 10;
           mpp['L'] = 50;
            mpp['C'] = 100;
             mpp['D'] = 500; 
               mpp['M'] = 1000; 



        for(int i=0;i<s.length();i++){
           if(mpp[s[i]]<mpp[s[i+1]]){
            ans+=mpp[s[i+1]] - mpp[s[i]];
            i++;
           }

           else ans+=mpp[s[i]];
        }
  return ans;  }
};

