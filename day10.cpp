problem 1 -> https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

  TC - O(N)
  OC - O(N)

  APPROACH - just made the positive and negative in array, then push them at even and odd position respectivey
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
int k=0;
int j=0;
        for(int i=0;i<nums.size();i++){
           if(i%2==0) ans.push_back(pos[k++]);
           else ans.push_back(neg[j++]);
        }
 return ans;   }
};



problem2-> https://leetcode.com/problems/next-permutation/description/
 IMPP !!! 
  approach --> when we observe the next permutation, we get to know that for the next term we are following a pattern
in which we from the last find the next smaller element from the last and then the next larger element than that smaller ones and swapped both of them, and the remaining terms
between the smaller element and last are sorted

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        int j = i-1;

       //finding the just decreasing element from the end
      while(j>=0 && nums[j+1]-nums[j]<=0){
        
                j--;
            

}
    //the element exists that is decreased from the last
    //ex - 321 does not have any next decreased element from the last
    if(j>=0){
     
        while(nums[i]<=nums[j]){
           i--;
        }

        swap(nums[i],nums[j]);
    }


           
        reverse(nums.begin()+j+1 ,nums.end());
    }
};





problem3-> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

 TC - O(N)
  OC - O(1)
  class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxi = 0;

        for(int i=1;i<n;i++){
            if(mini>prices[i]) mini = prices[i];
           else if(maxi<prices[i]-mini) maxi = prices[i]-mini;
        }
   return maxi; }
};

approach - while traversing, we find the minimum of the array, and simulatenously we are checking the max difference between current value - min of the array, return the max value



