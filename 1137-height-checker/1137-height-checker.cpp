class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int>vec;
       int abc=0;
       for(int i=0; i<heights.size(); i++){
           vec.push_back(heights[i]);
       }
       sort(vec.begin(),vec.end());
       for(int i=0; i<heights.size(); i++){
           if(vec[i]!=heights[i]){
               abc++;
           }
       }
       return abc;
    }
};