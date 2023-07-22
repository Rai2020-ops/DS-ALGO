class Solution
{
  public:
    string arrangeString(string str)
    {int sum=0;
    int cnt=0;
    string s="";
       
       for(int i=0;i<str.length();i++){
           if(str[i]>=48 && str[i]<=57){
               cnt++;
               sum+=(int)str[i]-48;
           }
           else if(str[i]>=65 && str[i]<=90){
               s+=str[i];
           }
       }
       sort(s.begin(),s.end());
       if(cnt==0){
           return s;
       }
       s+=to_string(sum);
        return s;
        
    }
};