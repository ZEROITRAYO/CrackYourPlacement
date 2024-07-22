class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        
        long long ans=INT_MAX;
        int pointer=0;
        
            for(int i=1;i<=n-m+1;i++){
                long long num1=a[pointer];
                long long num2=a[pointer+m-1];
                long long diff=num2-num1;
                
                ans=min(ans,diff);
                pointer++;
            }
            
            return ans;
    
    }   
};