//Question 1) 2591. Distribute Money to Maximum Children
//Approach: giving all the children 1 dollar and then counting total numbers of 7s possible by dividing and finding remainder with 7 and taking 3 cases.
//TC:O(1) SC:O(1)
class Solution {
public:
    int distMoney(int money, int children) {
        
        int ans= 0;
        money = money - children;

if(money<0) return -1;
    
        
       ans += money/7;
       if(ans>children) return children-1;
       children -=money/7;
         money= money%7;
if(children==0 && money>0) return ans-1;
     

       if(money==3 && children==1 && ans>0){
        ans -= money/3;
       }


    return ans; }
};

//Question 2) 409. Longest Palindrome
stored the value count In mapp, if value is even, hence stored in count, if odd, then stored its even values, and if we have not reached to count = length
, hence we have a element which can be placed at center to make palindrome, as we need the longest, so added 1
//TC: O(n)  SC: O(n) 
class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int>mpp;
        int count=0;

        if(s.length()==1) return 1;

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

        for(auto it:mpp){
            if((it.second)%2==0){
                count+=it.second;
            }

            else if(it.second%2!=0 && it.second == s.length()) return it.second;
            
            else if(it.second>1 && it.second%2 !=0){
                count = count + it.second - it.second%2;
            }
         
        }

        if(count<s.length()) return count+1;
        else return count;
    }
};
