problem1->
  
  class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mpp;
        char ans;

// stored the frequency of the eleements

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

        for(int i=0;i<s.length();i++){
            if(mpp[s[i]]==1){
               return i;
            }
        }

      
  return -1;  }
};

problem2->

  TC - O(nlogn)
  SC - O(n)

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int size =mat.size() * mat[0].size();
        int col = mat[0].size();
        
       vector<int>temp(size);
       
       for(int i=0;i<size;i++){
           
          temp[i] = mat[i/col][i%col];
       }
       
       int l = temp.size();
       
       sort(temp.begin(),temp.end());
       
       return temp[l/2];
    }
};



problem3-> 

  TC - O(nlogn)
  SC - O(n)
  
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
     

int row = mat.size();
int col = mat[0].size();

int n = row*col;

vector<int>temp(n);

for(int i=0;i<n;i++){
    temp[i] = mat[i/col][i%col];
}

sort(temp.begin(), temp.end());

int peek = n-1;

for(int i=0;i<n;i++){
   if( mat[i/col][i%col] == temp[peek]) return {i/col , i%col};
}

  return {};  }
};
