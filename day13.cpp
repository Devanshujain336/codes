problem1-> https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401
 TC -> O (logn)
  SC -> O (1)
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int s=0;
	int e =n-1;

	pair<int,int>ans;

	while(s<e){
        int mid = s+ (e-s)/2;

		if(a[mid]==x){
			return {x,x};
		}

		else if(a[mid]>x){
            e=mid;
		}

		else s = mid+1;
	}

	//now the start will give the ceil value;

	if(s==0 && a[s]>x){
		ans.first = (-1);
		ans.second = (a[0]);
	}

	else if(s==n-1 && a[s]<x){
	ans.first = a[s];
		ans.second = -1;
	
	}

	else if(a[e]==x){
		return {x,x};
	}


	else {
			ans.second = (a[s]);
		ans.first = (a[s-1]);
	}

	return ans;
}





problem3-> 
 TC -> O (N)
  SC -> O (N)

  APPROACH --> we select the pivot element where the order is changing, then we sorted the array and theen applied binary search
better approach -> it would be better if i could directly apply binary search into two sorted part and finded out the target index
  class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                 pivot = i+1;
                 break;
            }
        }

        vector<int>temp(nums.size());

        for(int i=0;i<nums.size();i++){
            temp[i] = nums[ (i+pivot)%(nums.size()) ];
        }
     // all are sorted now 

     //now applying binary search on it 

     int s = 0;
     int e = nums.size()-1;

     while(s<=e){
        int mid = s+ (e-s)/2;

        if(temp[mid]>target){
            e = mid -1;
        }

        else if (temp[mid]==target){
            return (mid+pivot)%(nums.size());
        }

        else s = mid+1; 
     }


   return -1; }
};
