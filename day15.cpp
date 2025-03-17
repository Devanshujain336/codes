problem1-> 
  
  class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        int size = b.size();
        
        for(int i=0;i<size;i++){
            a.push_back(b[i]);
        }
        
        sort(a.begin(),a.end());
        
        
    return a[k-1];}
};


problem2-> 
 approach -> it was needed to figure it out that we need to make this grid into single row if we need to apply binary search, we got to know that the binary search can be applied for the indexes
where row are repeating after 4 times , and we need to make again and again zero after col counts complete, hence we used row = row/n and col = col%n where n is our column size

  class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size = matrix.size() * matrix[0].size();
        int n = matrix.size();
        int m = matrix[0].size();

        int s = 0;
        int e = size-1;

while(e>=s){
    int mid = s+ (e-s)/2;

    if(matrix[mid/m][mid%m] > target){
        e =mid-1;
    }

    else if(matrix[mid/m][mid%m]==target) return true;

    else s = mid +1;

}

return false; }
};

Problem 3-> 
  
  
