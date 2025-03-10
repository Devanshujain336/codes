problem 1- > https://leetcode.com/problems/two-sum/description/

  APPROACH --> used map, stored all indexes along with their values, then subtracted target for each value of nums, then  mpp.count which checks that wheter the element is present or not, if element is present, then idexes of
both are return in the function 


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;


      for(int i=0;i<nums.size();i++){
         mpp[nums[i]]=i;
      }
     
      for(int i=0;i<nums.size();i++){
         int ans=target-nums[i];
         if(mpp.count(ans) && mpp[ans]!=i){
            return{i,mpp[ans]};
         }
      }
     

   return {}; }
};


problem2 -> https://leetcode.com/problems/sort-colors/description/

  approach --> just counted the respective count and then insertd them all
  class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one = 0;
        int two = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            if(nums[i]==2) two++;
            if(nums[i]==1) one++;
        }

      for(int i=0;i<zero;i++){
        nums[i]=0;
      }

      for(int i=zero;i<one+zero;i++){
        nums[i]=1;
      }

      for(int i=one+zero;i<two+one+zero;i++){
        nums[i]=2;
      }
    }
};




problem 3 -> https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0
  approach -> get the maximum adjacent sum of array as it is observed that it will be maximum sum with smallest and second smallest
  class Solution {
  public:
  
    int pairWithMaxSum(vector<int> &arr) {
        int maxi= -1;
     for(int i=0;i<arr.size()-1;i++){
  
                         maxi = max(maxi, arr[i]+arr[i+1]);

       
     }
       
    return maxi;}
};
