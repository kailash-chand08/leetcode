class Solution {
public:
    int countCommas(int n) {
      if(n >= 1000){
       int diff = n - 1000;
       return diff + 1;
      }
      return 0;
    }
};