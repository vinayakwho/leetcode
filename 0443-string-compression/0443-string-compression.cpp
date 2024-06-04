class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while (i < n) {
            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }
            // YHA KAB AAOGE
            // YA TOH POORA TRAVERSE KRLEA
            // YA NAYA CHARACTER MIL GYA

            // OLD CHARACTER KO COUNT KRKE STORE KRLEA
            chars[ansIndex++] = chars[i];
            int count = j - i;
            if (count > 1) {
                // CONVERTING COUNTING INTO SINGLE DIGIT AND STORING
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};