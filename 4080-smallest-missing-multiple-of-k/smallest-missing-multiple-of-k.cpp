class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int> set;

    for(auto i: nums){
        set.insert(i);
    }

    for(int i = 1; ; i++){
    int num = k * i;

    if(set.find(num) == set.end()){
        return num;
    }
}
    }
};