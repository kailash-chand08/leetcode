
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> pq;

        unordered_map<int, int> f;

        for (int i = 0; i < nums.size(); i++) {
            f[nums[i]]++;
        }

        for (auto i : f) {
            int element = i.first;
            int freq = i.second;

            pair<int, int> current = {freq, element};

            if (pq.size() < k) {
                pq.push(current);
            }
            else if (current.first > pq.top().first) {
                pq.pop();
                pq.push(current);
            }
        }

        vector<int> res;

        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};