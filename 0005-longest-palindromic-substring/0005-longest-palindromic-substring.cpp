class Solution {
public:
  
    bool isPalindrome(string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxLength = 0, start = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j)) {
                    int length = j - i + 1;
                    if (length > maxLength) {
                        maxLength = length;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, maxLength);
    }
};

