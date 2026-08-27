class Solution {
public:
    string lexGreaterPermutation(string s, string target) {

        unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        for(int i = target.size() - 1; i >= 0; i--) {

            unordered_map<char, int> temp = freq;

            bool possi = true;

          
            for(int j = 0; j < i; j++) {

                char ch = target[j];

                if(temp[ch] > 0) {
                    temp[ch]--;
                }
                else {
                    possi = false;
                    break;
                }
            }

            if(possi) {

               
                for(char x = target[i] + 1; x <= 'z'; x++) {

                    if(temp[x] > 0) {

                        string result = target.substr(0, i);

                        result += x;
                        temp[x]--;

                       
                        for(char c = 'a'; c <= 'z'; c++) {

                            while(temp[c] > 0) {
                                result += c;
                                temp[c]--;
                            }
                        }

                        return result;
                    }
                }
            }
        }

        return "";
    }
};