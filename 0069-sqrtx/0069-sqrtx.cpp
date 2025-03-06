class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;  
        }
        
        long long left = 0, right = x;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long midSquared = mid * mid;
            
            if (midSquared == x) {
                return mid;  
            } else if (midSquared < x) {
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        
       
        return right;
    }
};
