bool ispar(string x)
    {
        stack<int> s;
        for(int i=0;i<x.length();i++){
        if(x[i]=='('||x[i]=='{'|| x[i]=='['){
             s.push(x[i]);
             
        
        }
          else {
            if ((x[i] == ')') && (s.empty() || s.top() != '(')) return false;
            if ((x[i] == '}') && (s.empty() || s.top() != '{')) return false;
            if ((x[i] == ']') && (s.empty() || s.top() != '[')) return false;
            s.pop();
        }
        }
         
         return s.empty();
    
        
        
    }