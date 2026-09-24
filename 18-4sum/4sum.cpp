class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        int j,x;
        int n = nums.size();
        vector<vector<int>> res;

        for(int k = 0; k < n-3; k++){
            //duplicate handling for k
            if(k > 0 && nums[k] == nums[k-1]){
                continue;
            }
         for(int i = k+1; i<n - 2; i++){
            //dupicate handling for i
             if(i > k+1 && nums[i] == nums[i-1]){
                continue;
            }
            x = i+1;
            j = n-1;


            while(x < j){
                long long sum = (long long)nums[k]+nums[i]+nums[x]+nums[j];

                if(sum == target){
                    res.push_back({nums[k], nums[i], nums[x], nums[j]});
                    x++;
                    j--;
            //duplicate handling for x and j

            while(x < j && nums[x] == nums[x-1])
            x++;

           while(x < j && nums[j] == nums[j+1])
           j--;
                }
                else if(sum < target){
                    x++;
                }else{
                    j--;
                }
            }
         }

        }

        return res;
    }
};