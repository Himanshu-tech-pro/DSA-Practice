class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n =nums.size();
       
       int maxi = 0;
       if(n<2) return 0;
        for(int i =0;i<n;i++){
            for(int j =i+1; j<n;j++){
              int  sum = (nums[i]-1)*(nums[j]-1);
               maxi = max(maxi, sum) ;
            }
        }
        return maxi;
    }
};