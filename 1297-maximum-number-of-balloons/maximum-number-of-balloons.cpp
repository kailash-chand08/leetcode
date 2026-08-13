class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> map;
        string st = "balloon";
        unordered_map<char, int>mp;
        for(auto ch: st){
          mp[ch]++;
        }

        for(auto ch: text){
            map[ch]++;
        }

int res = INT_MAX;

        for(auto i:mp){
            char a = i.first;
            int fneed = i.second;
            int fhave = map[a];
            int times = fhave/fneed;
            res = min(res,times);
        }
        return res;

        
    }
};