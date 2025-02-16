class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> minHeap;
        vector<vector<int>> ans;
      int n =nums1.size();
        
        for (int i = 0; i < n; i++) {
            minHeap.push({nums1[i] + nums2[0], {i, 0}});
        }

       
        while (!minHeap.empty() && k-- > 0) {
            auto top = minHeap.top();
            minHeap.pop();
            int i = top.second.first, j = top.second.second;
            ans.push_back({nums1[i], nums2[j]});

            
            if (j + 1 < nums2.size()) {
                minHeap.push({nums1[i] + nums2[j + 1], {i, j + 1}});
            }
        }
        return ans;
    }
};
