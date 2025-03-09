
IMPORTANT !!!!
APPROACH -> analysis that the race track will repeat if start<=end and jo sirf last lap hoga, vo hi decide krega, the most repeated ones, else agar start>end hua 
means hume, 1 se end tak ke elements as yeh circular cover krega, and start se lekar n tak ke elements ko include krna padega
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int las = rounds.size();
     vector<int>ans;
  
// khatarank logic

        int start = rounds[0];
        int end = rounds[las-1];

        if(start<=end){
            for(int j=start; j<=end ; j++){
                ans.push_back(j);
            }
        }
//condition when it will be circular movement
            else {
                for(int j=1 ; j<=end;j++){
                    ans.push_back(j); 
                }

                for(int j=start;j<=n;j++){
                    ans.push_back(j); 
                }
            }

        
        
  return ans;  }
};
