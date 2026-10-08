class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int balance = 0;
        string res = "";

        for(auto i: s){
        
        if(i == '('){
            if(balance == 0){
                balance ++;
                continue;
            }else{
                res += i;
                balance ++;
            }
        }

        else{
            balance--;
            if(balance == 0){
                continue;
            }else{
                res += i;
            }
        }
        }
        return res;
    }
};