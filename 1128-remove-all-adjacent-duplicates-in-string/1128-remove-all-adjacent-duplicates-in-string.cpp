class Solution {
public:
    string removeDuplicates(string s) {
        //  int i = 0;
        // while (i < s.size() - 1) {
        //     if (s[i] == s[i + 1]) {
        //         s.erase(i, 2);
        //         if (i > 0) i--;  // Move one step back to check for new adjacent duplicates
        //     } else {
        //         i++;
        //     }
        // }
        // return s;
        string result = "";
        for(char c: s){
            if(!result.empty() && result.back() == c){
                result.pop_back();
            }
            else{
            result.push_back(c);
            }
        }
        return result;
    }
};