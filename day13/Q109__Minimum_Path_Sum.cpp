class Solution {
public:
    
    int helper(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& gg )
    { 
        if(gg[i][j]!=-1)
            return gg[i][j];
            
        if(i==grid.size()-1&&j==grid[0].size()||(i==grid.size()&&j==grid[0].size()-1))
            return gg[i][j]=0;
        
        else if(i>=grid.size()||j>=grid[0].size())
            return 1000;
        
       return  gg[i][j]= min(grid[i][j]+helper(grid,i+1,j,gg),grid[i][j]+helper(grid,i,j+1,gg));
      
    }
    
    int minPathSum(vector<vector<int>>& grid)
    { 
        vector<vector<int>>gg(grid.size()+1,vector<int>(grid[0].size()+1,-1));
        
        return helper(grid,0,0,gg);  
    }
    
};