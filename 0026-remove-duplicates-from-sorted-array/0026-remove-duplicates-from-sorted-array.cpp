class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int k=0;
     for(int i=1; i<nums.size(); i++){
         if(nums[i]!=nums[i-1]){
             nums[k+1]=nums[i];
             k++;
         }
     }
     return k+1;
    }
};