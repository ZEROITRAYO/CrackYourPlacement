class Solution {
public:
    int calculate(string s) {
        

           string str = "";
          if(s[0] != '-') str.push_back('+');
         
          for(int i = 0 ; i < s.length() ; i++)
          {
              if(s[i] == ' ') continue;
              str.push_back(s[i]);
          }
          s = str;
          char op = '+';
          int idx = 0;
          stack<int>stk;
          while(idx < s.length())
          {
              int num = 0;
              op = s[idx];
              idx++;

              while(idx < s.length() and (s[idx] >= '0' and s[idx] <= '9'))
              {
                  num = ((num * 10) + (s[idx] - '0'));
                  idx++;
              }
                  if(op == '+')
                  {
                       stk.push(num);
                  }
                  else if(op == '-')
                  {
                       stk.push(-1*num);
                  }
                  else if(op == '*')
                  {
                        int temp = stk.top();
                        stk.pop();
                        stk.push(temp*num);
                  }
                  else if(op == '/')
                  {
                        int temp = stk.top();
                        stk.pop();
                        stk.push(temp/num);
                  }
          }
          int ans = 0;
          while(!stk.empty())
          {
              ans = ans + stk.top();
              stk.pop();
          }
          return ans;
    }
};