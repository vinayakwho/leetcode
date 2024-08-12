class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

    int start = 0;
    int n = s.length();

    // Reverse each word within the reversed string
    for (int end = 0; end <= n; end++) {
        if (end == n || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }

        string result;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            if (!result.empty()) result += ' ';
            while (i < n && s[i] != ' ') result += s[i++];
        }
    }

    return result;
}
};