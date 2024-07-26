bool fun(int i,vector<int> adj[],vector<bool> &vis1,vector<bool> &vis2){
        vis1[i]=true;
        vis2[i]=true;
        
        for(auto x:adj[i]){
            if(!vis1[x]){
                if(fun(x,adj,vis1,vis2))
                    return(true);
            }
            else if(vis2[x]==true)
                return(true);
        }
        vis2[i]=false;
        return(false);
        
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis1(V+1,false);
        vector<bool> vis2(V+1,false);
        
        for(int i=0;i<V;i++){
            if(!vis1[i]){
                if(fun(i,adj,vis1,vis2))
                    return(true);
                
            }
            
        }
        return(false);
    }