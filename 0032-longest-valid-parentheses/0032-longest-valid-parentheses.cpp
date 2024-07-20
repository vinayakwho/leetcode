#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); // Base index for valid substring calculation
        int maxLength = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                st.push(i); // Push the index of '('
            } else {
                st.pop(); // Pop the matching '(' index
                if (st.empty()) {
                    st.push(i); // Push the current index as the new base index
                } else {
                    maxLength = max(maxLength, i - st.top()); // Calculate the length
                }
            }
        }

        return maxLength;
    }
};
