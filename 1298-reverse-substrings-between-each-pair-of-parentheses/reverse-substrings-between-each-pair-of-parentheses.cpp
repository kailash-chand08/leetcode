class Solution {
public:
    string reverseParentheses(string s) {
       
       string res;
       stack<char> st;

       for(auto i: s){
        if(i != ')'){
            st.push(i);      
              }else{
                string temp;
                while( st.top() != '('){
                    temp += st.top();
                    st.pop();
                }

                st.pop();

                for(auto ch: temp){
                    st.push(ch);
                }
              }
       }

       while(!st.empty()){
        res += st.top();
        st.pop();
       }
 reverse(res.begin(), res.end());
 return res;
    }
};