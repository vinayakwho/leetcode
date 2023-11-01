class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        int carry=1;
        int n=digits.size();
        for(int i=n-1; i>=0; i--){
            int sum=digits[i]+carry;
            digits[i]=sum % 10;
            carry= sum/10;
        }
        if(carry>0){
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};