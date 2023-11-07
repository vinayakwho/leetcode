class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(2, -1);
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                if(v[0]==-1){
                    v[0]=i;
                }
                v[1]=i;
            }
        }
       return v;
    }
};