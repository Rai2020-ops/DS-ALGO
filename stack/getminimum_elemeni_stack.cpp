
class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           stack<int>st=s;
           if(st.empty()){
               return -1;
           }
         int k=INT_MAX;
         while(!st.empty()){
            k=min(st.top(),k);
             st.pop();
         
         }
             
             return k;
         }
         
       
       
       /*returns poped element from stack*/
       int pop(){
           
           if(s.empty()){
               return -1;
           }
           int a=s.top();
           s.pop();
           return a;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           s.push(x);
       }
};