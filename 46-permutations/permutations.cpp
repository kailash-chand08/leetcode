
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    vector<bool> used;

    void solve(vector<int>& nums) {
        if (current.size() == nums.size()) {
            ans.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i] == true) {
                continue;
            }

            current.push_back(nums[i]);
            used[i] = true;

            solve(nums);

            current.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        used.resize(nums.size(), false);
        solve(nums);
        return ans;
    }
};
