class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> map;
        for(auto ch: s){
            map[ch]++;
        }
        int length = 0;
        bool odd = false;

        for(auto i:map){
            int freq = i.second;
            if(freq%2 == 0){
            length += freq;
            }
            //number is odd then....
            else if(freq % 2 == 1){
                odd = true;
            length += freq - 1;
            }
        }
        if(odd == true){
    return length + 1;
        }else{
            return length;
        }
    
    }
};