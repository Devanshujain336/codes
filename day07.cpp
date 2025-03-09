https://leetcode.com/problems/can-place-flowers/?envType=problem-list-v2&envId=greedy

approach --> traversed the flowerbed such that if we get the condition such that left and right side of the 
is zero and the current value is also zero, hence we can plant at that position, checks foe various position, if got the position
then make i= i+2, so that it can check at particular even or odd places
made some edge case conditions along with it

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count =0;
        int num= flowerbed.size();

        if(flowerbed.size()==1 && n==1){
    if(flowerbed[0]==0) return true;
    return false;
    
 }
        
           if(flowerbed.size()>1 && flowerbed[0]==flowerbed[1]){
            flowerbed[0]=1;
           
            count++;
        }


     for(int i=1;i<num-1;i++){
            if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i-1]==0) {
                count++;
                  flowerbed[i]=1;
                  i++;
            } 
            

        }

if(num>1 && flowerbed[num-1]==0 && flowerbed[num-2]==0) {
    flowerbed[num-1]==1;
    count++;
   }
     
   return count>=n; }
};


SC-- O (1)
TC -- O(N)


problem 2 -> https://leetcode.com/problems/minimum-positive-sum-subarray/description/?envType=problem-list-v2&envId=prefix-sum

approach -- sliding window application, consider the window of given size, then made the first window, and then for next windows add one element and remvoe the first element which was added to maintain 
the window size, then find the min of all the window size 

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int mini = INT_MAX;
        for(int i=l; i<=r;i++){

      int sum =0;
      
//creating first window
            for(int j=0;j<i;j++){
               sum+=nums[j];

      
           }   if(sum>0) mini = min(mini,sum); 
              

 
 //creating windows for the i size
for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                sum-=nums[j-i];

                if(sum>0) mini = min(mini,sum);
            }


            
        }
        int ans = -1;
        if(mini!=INT_MAX){
            ans = mini;
        }
  return ans;  }
};

SC-- O (1)
TC -- O(N*N)

