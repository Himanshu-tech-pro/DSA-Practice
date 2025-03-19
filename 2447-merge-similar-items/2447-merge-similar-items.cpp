class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> set;
        
        
        for (auto& item : items1) {
            set[item[0]] += item[1]; 
        }

       
        for (auto& item : items2) {
            set[item[0]] += item[1];
        }

       
        vector<vector<int>> result;
        for (auto& entry : set) {
            result.push_back({entry.first, entry.second});
        }

        
        sort(result.begin(), result.end());

        return result;
    }
};