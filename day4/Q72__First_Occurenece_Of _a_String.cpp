class Solution {
public:
    int strStr(string haystack, string needle) {
        string s="";
        int occur=-1;
        for(int i=0;i<needle.length();i++){
            s+=haystack[i];
        }
        if(s==needle){
            return 0;
        }
        for(int i=needle.length();i<haystack.length();i++){
             s.erase(0, 1);
             s+=haystack[i];
             if(needle==s){
                occur=i-needle.length()+1;
                break;
             }
        }
        return occur;
    }
};