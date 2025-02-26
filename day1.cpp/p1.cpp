//problem 1->
// https://leetcode.com/problems/ugly-number/description/?envType=problem-list-v2&envId=math


class Solution {
    public:
        bool isUgly(int n) {
            if(n==0) return false;
            while(n!=1){
           if(n%2==0) n=n/2;
           if(n%3==0) n=n/3;
           if(n%5==0) n=n/5;
    
    else if(n%2!=0 && n%3!=0 && n%5!=0 && n!=1) return false;
    
            }
       return true; }
    };
