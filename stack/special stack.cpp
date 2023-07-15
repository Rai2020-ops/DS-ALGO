
void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	if(s.size()==n){
	    return true;
	}
	else return false;
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
	int k=s.top();
	s.pop();
	return k;
}

int getMin(stack<int>& s){
	 int k=s.top();
	while(!s.empty()){
	    if(s.top()<k){
	        k=s.top();
	        
	    }
	   s.pop();
	    
	}
	return k;
}