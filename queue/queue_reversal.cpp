class Solution{
public:
	string removeDuplicates(string str) {
	   unordered_map<char, int> mpp;
	   string k;
	    for(int i=0;i<str.length();i++)
	    {
	        mpp[str[i]]++;
	        if(mpp[str[i]]==1)
	        k.push_back(str[i]);
	    }
	    return k;
	}
};