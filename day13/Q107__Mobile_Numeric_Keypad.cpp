class Solution {
public:

    void solve(int idx,int n,string& digits,string& temp, vector<string>& ans, vector<string>& dict){
        if(idx>=n){
            ans.push_back(temp);
            return;
        }
        string val=dict[digits[idx]-'0'];
        for(int i=0;i<val.length();i++){
            temp.push_back(val[i]);
            solve(idx+1,n,digits,temp,ans,dict);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        string temp="";
        vector<string> ans;
        if(n==0){
            return ans;
        }
        vector<string> dict={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,n,digits,temp,ans,dict);
        return ans;
    }
};