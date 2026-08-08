class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        
        
        

for(int k = 0; k < nums.size()-2; k++){

if (k > 0 && nums[k] == nums[k-1]){
    continue;
}
    int i = k+1;
    int j = nums.size() - 1;


        while(i < j){
        int ans = nums[k] + nums[i] + nums[j];
        if(ans < 0){
        i++;
        }
        else if(ans > 0){
        j--;
        }
        else{
            result.push_back({nums[k], nums[i], nums[j]});
            i++;
            j--;
             while (i < j && nums[i] == nums[i - 1]) {
        i++;
    }

    // skip duplicate values for j
    while (i < j && nums[j] == nums[j + 1]) {
        j--;
        }
}
    }
}
return result;
    }
};