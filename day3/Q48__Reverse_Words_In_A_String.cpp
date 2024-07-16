class Solution {
public:
    void Reverse(int i,int j,string &s){
        while(i<=j)swap(s[i++],s[j--]);
    }
    string solve(string &s) {
        reverse(s.begin(),s.end());
        s.push_back(' ');
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                Reverse(j,i-1,s);
                j=i+1;
            }
        }
        s.pop_back();
        return s;
    }
    string reverseWords(string s) {
        int n=s.size(),i=0,j=n-1,k=0;
        while(s[i]==' ')i++;
        while(s[j]==' ')j--;
        string ans;
        k=i;
        while(k<=j){
            while(s[k]==' ')k++;
            ans.push_back(s[k++]);
            if(s[k]==' '&&k<=j)ans.push_back(s[k++]);
        }
        return solve(ans);
    }
};