class Solution {
public:

    vector<int>ans;
    unordered_map<int, vector<int>>adj;

    void dfs(int u, int prev){
        ans.push_back(u);
        for(auto &it: adj[u]){
            if(it!=prev){
                dfs(it, u);
            }
        }
    }

    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        for(auto &it:adjacentPairs){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int start=-1;
        for(auto &it:adj){
            if(it.second.size()==1){
                start=it.first;
                break;
            }
        }
        dfs(start, -1e9);
        return ans;
    }
};