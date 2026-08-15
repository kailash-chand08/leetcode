class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> freq;
        int ans = 0;
        bool middle = false;

        for (auto word : words) {
            string rev = word;
            reverse(rev.begin(), rev.end());

            if (freq[rev] > 0) {
                ans += 4;
                freq[rev]--;
            }
            else {
                freq[word]++;
            }
        }

        // Check if any "aa", "bb", "cc"... can be the middle
        for (auto [word, count] : freq) {
            if (word[0] == word[1] && count > 0) {
                ans += 2;
                break;
            }
        }

        return ans;
    }
};