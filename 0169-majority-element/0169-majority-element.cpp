class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int n = nums.size();

        for (int num : nums) {
            hash[num]++;
        }

        for (auto it : hash) {
            if (it.second > n / 2) {
                return it.first;
            }
        }

        return -1; 
    }
};
