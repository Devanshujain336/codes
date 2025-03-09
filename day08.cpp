problem1-> https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
      
              int j = i+1;
     while(i<nums.size()-1 && j<nums.size()){
      

            if(nums[i]==0 && nums[j]!=0) {
                swap(nums[i],nums[j]);
                i++;
                j++;}

                else if(nums[i]!=0 ) {
                i++;
                j++;}

              

else
j++;
     }
        }
};

approach -> using two pointer method, move i and j, such that whenever a[i]=0 and a[j]!=0 we swapped the elements


TC - O(n)
  SC - O(1)


problem2 -> https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
   

int n= nums.size();

     vector<int>temp(n);

for(int i=0;i<nums.size();i++){
    temp[(i+k)%n]=(nums[i]);
}
        nums= temp;
    }
};

TC - O(n)
  SC - O(n)

  approach -- used the relation for the rotation
