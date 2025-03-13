first and third are just basics 

problem 2 -> https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

  approach -> applying binary search when the target is found, made while loop travelling till first point and then travelling through the last point

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> temp(2);
        int s = 0;
        int e = nums.size()-1;
int f = -1 ; 
int l = -1;
       

        while(s<=e){

             int mid = s + (e-s)/2 ; 

            if(target > nums[mid]){
               s = mid+1;
            }

            else if(target<nums[mid]){
                e = mid -1;
            }

            else if(target == nums[mid]){
           f= mid;
           l = mid;
                while(f>=0){
                    if(nums[f]==target && f>=0) f--;
                    else break;
                }

                while(l< nums.size()){
                    if(nums[l]==target && l<nums.size()) l++;
                     else break;
                }

                f = f+1;
                l = l-1;

               break;
            }
        }

                temp[0] = f;
                temp[1] = l;
   return temp; }
};
