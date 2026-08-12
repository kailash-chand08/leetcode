class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>have;
        unordered_map<char, int>need;

        for(char ch: magazine){
            have[ch]++;
        }
        for(char ch:ransomNote){
            need[ch]++;
        }

return fun(have, need);        
    }

    bool fun(unordered_map<char, int>have,unordered_map<char,int>need){

        for(auto i:need){
        char c = i.first;
        int fneed = i.second;
        int fhave = have[c];
        if(fhave<fneed){
            return false;
        }
        }
        return true;
    }
};