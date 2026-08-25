class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

    for(auto i: nums){
        freq[i]++;
    }

    for(int i=1;; i++){

    int num = k*i;

    if(freq.find(num) != freq.end()){
        continue;
    }else{
        return num;
    }

    }
    return -1;
    }
};