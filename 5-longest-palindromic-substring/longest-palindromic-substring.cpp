class Solution {
    public:
      string singlecenter(string s){
        int left = 0;
        int right = 0;
        int length = 0;
        string longest = "";
        for(int i = 0; i < s.size(); i++){
            left = i;
            right = i;

            while(left >= 0 && right < s.size() && s[left] == s[right] ){

                left --;
                right ++;

            }
            //moving back to the plaindrome
            left++;
            right--;

                string current = s.substr(left, (right - left)+1);

                if(current.length() > longest.length()){
                    longest = current;
                }

        }
        return longest;
      }

      public:
        string twocenter(string s){
            int left = 0;
            int right = 0;
            string longer = "";

            for(int i=0; i<s.size(); i++){
                left = i;
                right = i+1;

                while(left >= 0 && right < s.size() && s[left] == s[right]){
                    left --;
                    right ++;
                }

                left ++;
                right --;

                string current = s.substr(left, (right - left)+1);

                if(current.length() > longer.length()){
                    longer = current;
                }
            }
            return longer;
        }


public:
    string longestPalindrome(string s) {
        string odd = singlecenter(s);
        string even = twocenter(s);

      if (odd.length() > even.length()) {
        return odd;
    }

    return even;
}
};