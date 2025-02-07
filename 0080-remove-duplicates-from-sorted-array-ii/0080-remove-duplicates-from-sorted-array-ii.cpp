class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        if (nums.size() <= 2) return nums.size(); 
        int cnt =2;
        for(int i=2; i<n;i++){
            if(nums[i]!= nums[cnt-2]){
                nums[cnt] = nums[i];
                cnt++ ;
        }   
        }
        return cnt;
    }
};