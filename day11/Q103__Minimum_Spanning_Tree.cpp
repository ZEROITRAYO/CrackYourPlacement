int spanningTree(int n, vector<vector<int>> adj[])
    {
        int totalWt = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
                        greater<pair<int, int>>> pq;
        
        vector<bool> vis(n, 0);
        int srcNode = 0;
        pq.push({0,0});
        
        while(!pq.empty()) {
            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            if (vis[node]) continue;
            
            vis[node] = 1;
            totalWt += wt;
            
            for(auto it: adj[node]) {
                int adjNode = it[0];
                int adjWt = it[1];
                
                if (!vis[adjNode]) {
                    pq.push({adjWt, adjNode});
                }
            }
        }
        return totalWt;
    }