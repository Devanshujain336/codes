SORT CHARACTERS BY FREQ -> https://leetcode.com/problems/sort-characters-by-frequency/description/

SC = o(N)
  TC = o(NLOGk) as atmost k=26 elements will be stored, it is fix
 Approach -> firat we counted the count for all the characters and then we push the pair of count and char in vector pair, then sorted the vector pair, then with the use of append, appended the char in the ans string, with string(4,'c') means 4 times c


class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        string ans = "";

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

vector<pair<int,char>>app;

        for(auto it:mpp){
            //need of { } as inserting pair
            app.push_back({it.second, it.first});
        }
        // r begin and r end make decending order sort

        sort(app.rbegin(),app.rend());

        for(auto it:app){
            // append function is used for making it append n times it,first
            // append(char,int) or we can tell that each char needs to be appended int times
            ans.append(it.first , it.second);
        }

 return ans;   }
};


ATOI -- GOOD CONDITIONS

  class Solution {
public:
using ll = long long;
    int myAtoi(string s) {
        int i=0;
ll res= 0;
ll sign = 1;
    
        int n = s.length();

        //removing white space
     while(i<n && s[i]==' '){
        i++;
     }

     if(i==n) return 0;

     //checking sign
     if( s[i]=='-'){
        sign = -1;
        i++;
     }

      else if(i<n && s[i]=='+'){
        sign = 1;
        i++;
     }

     //conversion

     while(i<n && isdigit(s[i])){
        res = res*10 + (s[i]-'0') ;
 
 

    if(sign*res> INT_MAX) return INT_MAX;
    if(res*sign < INT_MIN) return INT_MIN;
i++;
    }

   return int(res)*sign ;  }
};

