problem1 -> https://leetcode.com/problems/pascals-triangle/description/

  approach -- > 2D vector, har row ke saath humne ek uss row ki size ka array push kr diya, and then 2 conditions ka use kiya ki agar last and first position h toh 1, else hum upr ke 2 ka sum krenge 
and usko store krwa lenge 

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp; 
        //learning that the vector can only be inserted in vector

        

        for(int i=0; i<numRows;i++){
            //each time we pushed the size of array into 2D
            vector<int>a(i+1);
           temp.push_back(a);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) temp[i][j]=1;
                else{
                    temp[i][j] = temp[i-1][j-1] + temp[i-1][j];
                }
            }
        }
    return temp;}
};

SC - O(n)
  Tc - O(n sq)
