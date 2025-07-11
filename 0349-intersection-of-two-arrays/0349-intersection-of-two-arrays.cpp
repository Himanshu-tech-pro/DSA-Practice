class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n =nums1.size();
        int m = nums2.size();
        unordered_set<int>ans;
        for(int i=0; i<n; i++){
            for(int j =0;j<m; j++){
                if(nums1[i]==nums2[j])
                ans.insert(nums1[i]);
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};