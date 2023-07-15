
//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{   
    q1.push(x);
     while(!q2.empty()){
         q1.push(q2.front());
         q2.pop();
     }
     swap(q1,q2) ;
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{      if(q2.empty()){
    return -1;
        
}
 int a=q2.front();
 q2.pop();
 return a;
}