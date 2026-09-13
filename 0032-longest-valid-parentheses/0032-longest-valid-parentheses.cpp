class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int top=-1, longest=0;
        st.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                st.pop();
                if(st.empty()) {
            st.push(i);}
             else {
                    longest=max(longest, i - st.top());
        }}}
        return longest;
    }
};