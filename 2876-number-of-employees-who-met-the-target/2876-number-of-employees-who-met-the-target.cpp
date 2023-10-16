class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {

        sort(hours.begin(),hours.end());
        int n = hours.size();
        int ans=0;

        for(int i =0;i<n;i++){
            if(hours[i]>=target){
                ans++;
            }
        }
        return ans;
        
    }
};