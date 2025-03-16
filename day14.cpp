problem 1-> lass Solution {
  public:
    int floorSqrt(int n) {
       int s = 1;
       int e = n;
       int ans = 1;
       
       while(s<=e){
           int mid = s + (e-s)/2;
           
           if(mid*mid==n){
               return mid;
           }
           
           else if(mid*mid<n){
               ans = mid;
               s= mid +1;
           }
           
           else e = mid-1;
       }
   return ans; }
};



problem2-> 
  
  class Solution {
public:
bool ischeck(vector<int> & nums, int n , int k, int thres){
    long long sum=0;
  for(int i=0;i<n;i++){
    sum+= (nums[i]+k-1)/k; //for ceiling  we convert n/k --> (n+k-1)/k
  }

  if(sum<=thres) return true;

return false; }

    int smallestDivisor(vector<int>& nums, int threshold) {
        long long s=1; //AS divisor must be starting from 1
        long long sum=0;
        long long ans=0;
        
        for(auto i:nums){
            sum+=i;
        }
        long long e=sum;
long long mid= s+(e-s)/2;
        while(s<=e){
            if(ischeck(nums,nums.size(),mid,threshold)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        mid= s+(e-s)/2; }
   return ans; }
};





problem 3-> koko eating banana 
using ll = long long;
class Solution {
public:

//approach -> we need to find the minimum per hour eating speed
// hence and return the ceil as once eaten one pile either it is lower than speed but it will take one hour, for ceil we will be using temp[i]+k-1 / k, we apply binary search for finding the search space for the minimum speed we needed for the question 

bool check(vector<int>& piles, ll k,int h){
    //making koko eating banana with k speeed and checking hour
     for(ll i=0;i<piles.size();i++){
        //applying ceil function
        h= h - (piles[i]+k-1)/k;
     }

     if(h<0) return false;


return true;}

    int minEatingSpeed(vector<int>& piles, int h) {
        ll sum = 0;
        ll ans = 1;
        for(ll i= 0;i<piles.size();i++){
            sum+=piles[i];
        }

        ll s = 1; //as atleast 1 bananana per hour will be eating speed
        ll e = sum;
// we have to consecutively check whether the speed completing banana in less than h hours
        while(s<=e){
            ll mid = s + (e-s)/2;

            if(check(piles,mid,h)){
                ans = mid;
                //we need minimum hence, decerase the window size
                e = mid-1;
            }

            else s = mid+1;
        }
   return ans; }
};
