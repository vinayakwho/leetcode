class Solution {
public:
char check(char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return ch;
  } else {
    return ch - 'A' + 'a';
  }
}
bool valid(char ch) {
  if ((ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ||
       ch >= '0' && ch <= '9')) {
    return true;
  } else {
    return false;
  }
}
    bool isPalindrome(string s) {
      int st = 0;
  int e = s.length() - 1;

  while (st < e) {
    if (valid(s[st])) {
      if (valid(s[e])) {
        if (check(s[st]) != check(s[e])) {
          return false;
        } else {
          st++;
          e--;
        }
      } else {
        e--;
      }
    } else {
      st++;
    }
  }
  return true;
}   
};