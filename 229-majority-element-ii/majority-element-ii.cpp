class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int, int>freq;
        vector<int> res;

        for(auto i: nums){
            freq[i]++;
        }
        for(auto it: freq){
            if(it.second > nums.size()/3){
                res.push_back(it.first);
            }
        }
        return res;
    }
};