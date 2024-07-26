class StockSpanner {
public:
    stack<int> st;
    stack<int> ft;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(st.empty()){
            st.push(price);
            ft.push(1);
            return 1;
        }
        else if( price<st.top()){
            st.push(price);
            ft.push(1);
            return 1;
        }
        else{
            int temp=1;
            while(!st.empty() && st.top()<=price){
                st.pop();
                temp+=ft.top();
                ft.pop();
                cout<<temp<<" ";
            }
            st.push(price);
            ft.push(temp);
            return temp;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */