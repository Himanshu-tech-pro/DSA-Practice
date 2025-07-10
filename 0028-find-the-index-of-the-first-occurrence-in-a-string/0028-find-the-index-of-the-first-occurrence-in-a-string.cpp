class Solution {
public:
    int strStr(string haystack, string needle) {
        int  n = haystack.size();
        int m = needle.size();
        if(m==0) return 0;
       if (n == 1 && m == 1 && haystack[0] == needle[0]) return 0;
        for(int i = 0; i<=n-m ; ++i){
            if(haystack.substr(i,m) == needle) {
                return i;
            }
        }
        return -1;
    }
};