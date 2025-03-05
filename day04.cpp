question1 -> https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math

approach - indirectly for the remainder to be 1, we must divide it with n-1 except itself, hence all the number except it must be counted


class Solution {
public:

    int distinctIntegers(int n) {
     if(n==1) return 1;   
   return n-1; }
};


question 2->

  https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
  
  class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
    sort(a.begin(),a.end());
       int i = 0;
       int j= m-1;
       int mini =INT_MAX;
       
       
       while(j<a.size()){
         mini = min(mini, a[j]-a[i]); 
         j++;
         i++;
       }
   return mini; }
};

TC=O(n)
  sc - O(1)

  approach - sorted the array, then stored the difference between m-1 elements, minimum of all differences is answer
