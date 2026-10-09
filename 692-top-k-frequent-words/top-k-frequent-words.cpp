
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> f;

        for (auto i : words) {
            f[i]++;
        }

        // Min-heap with custom comparator
        auto cmp = [](const pair<int, string>& a,
                      const pair<int, string>& b) {
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first > b.first;
        };

        priority_queue<pair<int, string>,
                       vector<pair<int, string>>,
                       decltype(cmp)> pq(cmp);

        for (auto i : f) {
            pq.push({i.second, i.first});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        vector<string> res;

        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};