class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> present(nums.size());

        // Mark the elements that are present in the array
        for (int num : nums) { // iterate through the element of array
            if (num <= nums.size()) {
                present[num] = true;    // mark the corresponding index in the
                                        // 'present' array as 'true'. This means that
                                        // the element is present in the array.
            }
        }

        // Find all elements that are not marked as present
        vector<int> missingElements;
        for (int i = 1; i <= nums.size(); i++) {
            if (!present[i]) {
                missingElements.push_back(i);
            }
        }

        return missingElements;
    }
};