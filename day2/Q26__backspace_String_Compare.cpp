class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> tt;

        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                st.push(s[i]);
            }
            else{
                if(!st.empty())
                st.pop();

                else{
                    continue;
                }
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                tt.push(t[i]);
            }
            else{
                if(!tt.empty())
                tt.pop();

                else{
                    continue;
                }
            }
        }

        if(st.size()!=tt.size()){
            return false;
        }
        else{
            string ans="";
            string ans2="";

            for(int i=0;!st.empty();i++){
                ans+=st.top();
                ans2+=tt.top();
                st.pop();
                tt.pop();

            }
            if(ans==ans2){
                return true;
            }
            else{
                return false;
            }

        }

    }
};