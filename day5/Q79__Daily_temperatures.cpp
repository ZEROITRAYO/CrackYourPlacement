class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> s;   // store index
        s.push(n-1);

        for(int i = n-2; i>=0 ; i--) {
            while(!s.empty() && temperatures[s.top()] <= temperatures[i]) s.pop();
            if(s.empty()) {
                s.push(i);
                continue;
            }
            ans[i] = s.top() - i;
            s.push(i);
        }
        return ans;
    }
};