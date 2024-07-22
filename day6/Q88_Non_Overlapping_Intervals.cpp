class Solution {
public:
    
    static bool cmp(const vector<int>& a,const vector<int>& b){
          return a[1]<b[1];
      }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int cnt=0,n=intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);
        
        int end=intervals[0][1];
        
        for(int i=1;i<n;i++){
            if(intervals[i][0] <end) cnt++;
            else end=intervals[i][1];
        }
        
        return cnt;
        
    }
};