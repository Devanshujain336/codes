Longest Common Prefix
Approach -> made a reference to the first string in strings, and with its reference moved iterations for each letter and if the iteration making different value at index, we break our loop

TC - O(n*m)
SC - O(1)



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string ref = strs[0];

bool flag = true;

        for(int i=0;i<ref.size();i++){
            for(int j=1;j<strs.size();j++){
                if(ref[i]!=strs[j][i]){
                     flag = false;
                     break; }
            }
            if(flag) ans+=strs[0][i];
        }
  return ans;  }
};
