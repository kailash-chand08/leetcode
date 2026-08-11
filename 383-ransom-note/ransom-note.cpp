class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     bool found = false;

     unordered_map<char , int>map;

     for(char ch:magazine){
        map[ch]++;
     }   

     for(auto ch: ransomNote){
      if(map[ch] == 0){
        return false;
      }
      map[ch]--;
     }
     return true;
    }
};