class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> res(n,-1);

        for(int i=0; i<n; i++){
            while(!st.empty() && nums[i]>nums[st.top()]){
                int prev = st.top();
                st.pop();
                res[prev] = nums[i];
            }
           
            st.push(i);
        }

        for(int i = 0; i<n; i++){
          while(!st.empty() && nums[i]>nums[st.top()]){
                int prev = st.top();
                st.pop();
                res[prev] = nums[i];
            }
        }
        return res;
           }
};