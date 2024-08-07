class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	
	void dfs(int node, vector<int> adj[], vector<bool> &visited, stack<int> &st){
	    visited[node]=1;
	    for(int neighbour:adj[node]){
	        if(!visited[neighbour]){
	            dfs(neighbour,adj,visited,st);
	        }
	    }
	    st.push(node);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	     stack<int> st;
	    vector<int> ans;
	    vector<bool> visited(V, 0);
	    
	    for(int i=0; i<V; i++){
	        if(!visited[i]){
	            dfs(i, adj, visited, st);
	        }
	    }
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	    return ans;
	    
	}
};