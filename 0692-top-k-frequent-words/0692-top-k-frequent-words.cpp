class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
      unordered_map<string, int> mp;
        for (const string& word : words) {
            mp[word]++;
        }

      
        auto cmp = [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first > b.first || (a.first == b.first && a.second < b.second);
        };
        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);

        for (const auto& it : mp) {
            pq.push({it.second, it.first});
            if (pq.size() > k) pq.pop();
        }

        vector<string> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        reverse(result.begin(), result.end());

        return result;
    }
};
