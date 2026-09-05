class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int prefmax[nums.size()];
        int suffmin[nums.size()];
        int maximum = INT_MIN;
        int mini =INT_MAX;
        for(int i=0; i<nums.size(); i++){
        maximum = max(nums[i],maximum);
        prefmax[i] = maximum;
        }
        for(int i = nums.size()-1 ; i >= 0; i--){
        mini = min(nums[i], mini);
        suffmin[i] = mini;
        }

        for(int i=0; i< nums.size(); i++){
            if(prefmax[i] - suffmin[i] <= k){
                return i;
            }
        }
return -1;
    }
};